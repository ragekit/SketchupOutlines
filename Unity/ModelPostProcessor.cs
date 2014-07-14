using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Xml;
using System.IO;
public class ModelPostProcessor : AssetPostprocessor {

	public float lineWidth = 0.06f;
	public float scale = 1;
	private Mesh mesh;

	public GameObject linesObject;

	public Edge[] edges;

	public static string savePath ="Assets/Within/Resources/Models/LinesMeshes/";
	public static string materialPath ="Assets/Within/Resources/Materials/BaseLine.mat";

	void OnPreprocessModel () {
		ModelImporter modelImport = (ModelImporter) assetImporter;
		modelImport.addCollider = true;
		modelImport.importMaterials = false;
		modelImport.globalScale = 0.0254f;
		modelImport.animationType = ModelImporterAnimationType.None;
	}

	void OnPostprocessModel(GameObject obj)
	{

		MeshFilter[] filters = obj.transform.root.GetComponentsInChildren<MeshFilter>();
		int i = 0;
		Debug.Log(filters.Length);
		foreach(MeshFilter filter in filters)
		{
			if(i>0)
			{
				filter.sharedMesh.name = "Mesh_" + (obj.name) +"_"+i;
				filter.gameObject.name =  "Geometry_" + (obj.name) +"_"+i;
				filter.gameObject.transform.parent = obj.transform;
			}else
			{
				filter.sharedMesh.name = "Mesh_Wall_" + (obj.name) +"_"+i;
				filter.gameObject.name =  "Geometry_Wall_" + (obj.name) +"_"+i;
				filter.gameObject.transform.parent = obj.transform.root;
				filter.gameObject.AddComponent<Wall>();
			}
			i+=1;
		}

		foreach(Transform t in obj.transform)
		{
			if(t.name.StartsWith("Group")) Object.DestroyImmediate(t.gameObject); 
		}

		CreateOutlines(obj);

	}


	void writeFace(XmlNode xmlFace,Vector3 offset,List<Edge> edgeList)
	{
		XmlNodeList faceChilds = xmlFace.ChildNodes;
		foreach(XmlNode faceChild in faceChilds)
		{
			if(faceChild.Name == "Loop")
			{
				XmlNodeList verts = faceChild.ChildNodes;
				
				List<Vector3> facePoints = new List<Vector3>();
				//if(verts.Count <=4 ) continue;
				for(int i =0;i<verts.Count;i++)
				{
					XmlNode pointA = verts[i].FirstChild;
					Vector3 fromXml = new Vector3(float.Parse(pointA.Attributes["x"].Value),float.Parse(pointA.Attributes["y"].Value),float.Parse(pointA.Attributes["z"].Value));
					fromXml = (fromXml + offset) * 0.0254f;
					facePoints.Add(fromXml);
					
				}
				var dir = Vector3.Cross(facePoints[1] - facePoints[0], facePoints[2] - facePoints[0]);
				var norm = Vector3.Normalize(dir);
				if(faceChild.Name == "Loop")
				{
					for(int i=0;i<facePoints.Count;i++)
					{
						Edge e = new Edge();
						e.A = facePoints[i];
						if(i<facePoints.Count - 1)
						{
							e.B = facePoints[i+1];
						}else
						{
							e.B = facePoints[0];
						}
						
						e.normal = norm;
						edgeList.Add(e);
					}
				}
				if(faceChild.Name == "Triangles")
				{
					for(int i=0;i<facePoints.Count-3;i+=6)
					{
						Edge e = new Edge();
						e.A = facePoints[i];
						e.B = facePoints[i+1];
						e.normal = norm;
						edgeList.Add(e);

					}
				}

			}
		} 
	}

	void CreateOutlines(GameObject obj)
	{

		//Lineify ln = obj.AddComponent<Lineify>();


		List<Edge> edges = new List<Edge>();
		XmlDocument xmlDoc = new XmlDocument(); 
		int pos = assetPath.LastIndexOf("/")+1;
		string path = assetPath.Substring(0,pos)+obj.name+".xml";
		Debug.Log(path);

		TextAsset sr = Resources.LoadAssetAtPath<TextAsset>(path) as TextAsset;
		string xmlText = sr.text;
		xmlText = xmlText.Insert(0,"<Document>\n");
		xmlText = xmlText.Insert(xmlText.Length-1,"\n</Document>");

		Debug.Log(xmlText);

		xmlDoc.LoadXml(xmlText);

		XmlNodeList topLevelList = xmlDoc.GetElementsByTagName("Geometry")[0].ChildNodes;

		foreach (XmlNode topLevel in topLevelList)
		{
			Vector3 offset = Vector3.zero;

			if(topLevel.Name == "Group")
			{
				XmlNode transform = topLevel["Transformation"];
				offset.x = float.Parse(transform.Attributes["m03"].Value);
				offset.y = float.Parse(transform.Attributes["m13"].Value);
				offset.z = float.Parse(transform.Attributes["m23"].Value);

				foreach(XmlNode face in topLevel.ChildNodes)
				{
					writeFace(face,offset,edges);
				}

			}
			if(topLevel.Name == "Face")
			{
				writeFace(topLevel,offset,edges);
			}
			    
		}

		GameObject linesGo = new GameObject();
		linesGo.name = obj.name+"_Lines";
		MeshFilter mf = linesGo.AddComponent<MeshFilter>();
		mf.sharedMesh = new Mesh();
		mf.sharedMesh.name = "Lines_" + obj.name;

		linesGo.transform.localPosition = Vector3.zero;
		linesGo.transform.localRotation = Quaternion.Euler(new Vector3(90,0,0));
		linesGo.transform.localScale = new Vector3(-1,-1,-1);
		linesGo.tag = "LinesMesh";
		linesGo.AddComponent<MeshRenderer>();
		linesGo.renderer.material = AssetDatabase.LoadAssetAtPath(materialPath,typeof(Material)) as Material;
		linesGo.transform.parent = obj.transform.root;
		linesObject = linesGo;

		this.edges = edges.ToArray();
		GenerateLines();
		SaveMesh();
	}
	
	private void SaveMesh()
	{
		AssetDatabase.CreateAsset(mesh,savePath+linesObject.name+"_newLines.asset");
		AssetDatabase.SaveAssets();
		AssetDatabase.Refresh();
	}
	
	public void GenerateLines()
	{
		mesh = linesObject.GetComponent<MeshFilter>().sharedMesh;
		mesh.Clear();
		foreach(Edge e in edges)
		{
			AddLine(mesh, MakeQuad(e, lineWidth), false);
		}
		mesh.RecalculateNormals();
		mesh.RecalculateBounds();
	}
	Vector3[] resizeVertices(Vector3[] ovs, int ns) {
		Vector3[] nvs = new Vector3[ovs.Length + ns];
		for(int i = 0; i < ovs.Length; i++) nvs[i] = ovs[i];
		return nvs;
	}
	
	int[] resizeTriangles(int[] ovs, int ns) {
		int[] nvs = new int[ovs.Length + ns];
		for(int i = 0; i < ovs.Length; i++) nvs[i] = ovs[i];
		return nvs;
	}
	
	Vector2[] resizeUvs(Vector2[] ovs, int ns) {
		Vector2[] nvs = new Vector2[ovs.Length + ns];
		for(int i = 0; i < ovs.Length; i++) nvs[i] = ovs[i];
		return nvs;
	}
	
	Vector3[] MakeQuad(Edge ed, float w) {
		w = w / 2;
		Vector3[] q = new Vector3[4];
		Vector3 s = ed.A;
		Vector3 e = ed.B;
		Vector3 ls = Vector3.Cross(e-s,ed.normal);
		
		//Vector3 l = Vector3.Cross(n, e-s);
		ls.Normalize();
		
		q[0] = (s + ls * -w);
		q[1] = (s + ls * w);
		q[2] = (e + ls * -w);
		q[3] = (e + ls * w);
		
		return q;
	}
	
	void AddLine(Mesh m, Vector3[] quad, bool tmp) {
		int vl = m.vertices.Length;
		
		Vector3[] vs = m.vertices;
		if(!tmp || vl == 0) vs = resizeVertices(vs, 4);
		else vl -= 4;
		
		vs[vl]  = quad[0];
		vs[vl+1] = quad[1];
		vs[vl+2]  =quad[2];
		vs[vl+3] =quad[3];
		
		
		
		int tl = m.triangles.Length;
		
		int[] ts = m.triangles;
		if(!tmp || tl == 0) ts = resizeTriangles(ts, 6);
		else tl -= 6;
		ts[tl]  = vl;
		ts[tl+1] =vl+1;
		ts[tl+2]  =vl+2;
		ts[tl+3] =vl+1;
		ts[tl+4] =vl+3;
		ts[tl+5] =vl+2;
		
		
		int uvl = m.uv.Length;
		Vector2[] uvs = m.uv;
		if(!tmp || uvl == 0) uvs = resizeUvs(uvs,4);
		
		
		float dist = Vector3.Distance(quad[0],quad[2]);
		
		uvs[uvl]  = new Vector2(0,0);
		uvs[uvl+1]  =new Vector2(1,0);
		uvs[uvl+2] = new Vector2(0,1*dist*scale);
		uvs[uvl+3]  =new Vector2(1,1*dist*scale);
		
		
		m.vertices = vs;
		m.uv = uvs;
		m.triangles = ts;
		
	}

}

#include "stdafx.h"
#include "GeomUtilities.h"

//Transformation Class--------------------------------
CTransform::CTransform()
{
    SetToIdenity();
}

CTransform::CTransform(double m[16])
{
    SetMatrix(m);
}


CTransform::~CTransform(void)
{
}


void CTransform::SetMatrix(double m[16])
{
    for (int i=0;i<16;i++)
    {
        m_t[i]=m[i];
    }
}

void CTransform::SetToIdenity()
{
    for (int i=0;i<16;i++)
    {
        m_t[i]=0;
    }
    m_t[0]=1;
    m_t[5]=1;
    m_t[10]=1;
    m_t[15]=1;
}

CPoint3d CTransform::operator*(const CPoint3d& pt) const
{
    CPoint3d p;

    p.SetX(m_t[15] * (m_t[0] * pt.X() + m_t[4] * pt.Y() + m_t[8] * pt.Z() + m_t[12]));
    p.SetY(m_t[15] * (m_t[1] * pt.X() + m_t[5] * pt.Y() + m_t[9] * pt.Z() + m_t[13]));
    p.SetZ(m_t[15] * (m_t[2] * pt.X() + m_t[6] * pt.Y() + m_t[10] * pt.Z() + m_t[14]));

    return p;
}

CVector3d CTransform::operator*(const CVector3d& vec) const
{
    CVector3d v;

    v.SetX(m_t[15] * (m_t[0] * vec.X() + m_t[4] * vec.Y() + m_t[8] * vec.Z()));
    v.SetY(m_t[15] * (m_t[1] * vec.X() + m_t[5] * vec.Y() + m_t[9] * vec.Z()));
    v.SetZ(m_t[15] * (m_t[2] * vec.X() + m_t[6] * vec.Y() + m_t[10] * vec.Z()));

    return v;
}

CTransform CTransform::operator*(const CTransform& t1) const
{
    CTransform t2;

    for (int i=0;i<4;i++)
    {
        int i2 = (i*4);
        for (int j=0;j<4;j++)
        {
            t2.m_t[i2+j] = m_t[j] * t1.m_t[i2] + m_t[j+4] * t1.m_t[i2+1] + m_t[j+8] * t1.m_t[i2+2] + m_t[j+12] * t1.m_t[i2+3];
        }
    }

    return t2;
}


//Point Class----------------------------------------
CPoint3d::CPoint3d(CComPtr<ISkpPoint3d> point)
{
    point->get_X(&m_x);
    point->get_Y(&m_y);
    point->get_Z(&m_z);
}

void CPoint3d::operator+=(const CVector3d& vec)
{
    m_x += vec.X();
    m_y += vec.Y();
    m_z += vec.Z();
}

void CPoint3d::operator-=(const CVector3d& vec)
{
    m_x -= vec.X();
    m_y -= vec.Y();
    m_z -= vec.Z();
}

CPoint3d CPoint3d::operator+(const CVector3d& vec) const
{
    double x = m_x + vec.X();
    double y = m_y + vec.Y();
    double z = m_z + vec.Z();
    return CPoint3d(x, y, z);
}

CPoint3d CPoint3d::operator+(const CPoint3d& pt) const
{
    double x = m_x + pt.m_x;
    double y = m_y + pt.m_y;
    double z = m_z + pt.m_z;
    return CPoint3d(x, y, z);
}

CPoint3d CPoint3d::operator-(const CVector3d& vec) const
{
    double x = m_x - vec.X();
    double y = m_y - vec.Y();
    double z = m_z - vec.Z();
    return CPoint3d(x, y, z);
}

CVector3d CPoint3d::operator-(const CPoint3d& pt) const
{
    double dx = m_x - pt.m_x;
    double dy = m_y - pt.m_y;
    double dz = m_z - pt.m_z;
    return CVector3d(dx, dy, dz);
}

//Vector Class----------------------------------------
CVector3d::CVector3d(CComPtr<ISkpVector3d> vec)
{
    vec->get_X(&m_x);
    vec->get_Y(&m_y);
    vec->get_Z(&m_z);
}

CVector3d CVector3d::operator+(const CVector3d& vec) const
{
    return CVector3d(m_x + vec.m_x, m_y + vec.m_y, m_z + vec.m_z);
}

CVector3d CVector3d::operator-(const CVector3d& vec) const
{
    return CVector3d(m_x - vec.m_x, m_y - vec.m_y, m_z - vec.m_z);
}

void CVector3d::operator+=(const CVector3d& vec)
{
    m_x += vec.m_x;
    m_y += vec.m_y;
    m_z += vec.m_z;
}

void CVector3d::operator-=(const CVector3d& vec)
{
    m_x -= vec.m_x;
    m_y -= vec.m_y;
    m_z -= vec.m_z;
}

CVector3d CVector3d::operator*(double scale) const
{
    return CVector3d(m_x * scale, m_y * scale, m_z * scale);
}

CVector3d CVector3d::operator/(double scale) const
{
    return CVector3d(m_x / scale, m_y / scale, m_z / scale);
}

void CVector3d::operator*=(double scale)
{
    m_x *= scale;
    m_y *= scale;
    m_z *= scale;
}

void CVector3d::operator/=(double scale)
{
    m_x /= scale;
    m_y /= scale;
    m_z /= scale;
}

bool CVector3d::operator==(const CVector3d& v) const
{
    return AreEqual(m_x, v.m_x, EqualTol) && AreEqual(m_y, v.m_y, EqualTol) && AreEqual(m_z, v.m_z, EqualTol);
}

bool CVector3d::operator!=(const CVector3d& v) const
{
    return !operator==(v);
}
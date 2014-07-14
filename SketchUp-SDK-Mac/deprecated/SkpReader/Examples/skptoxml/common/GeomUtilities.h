#pragma once

#ifdef __APPLE__
#include <SketchUp/sketchup.h>
#endif

//This module defines geometric classes that are usefull in processing
//the objects coming from Sketchup.


//Utility Methods-------------------------------------
const double DivideByZeroTol = 1.0e-10;
const double DivideByZeroTolSq = DivideByZeroTol * DivideByZeroTol;

const double EqualTol = 1.0e-3;
const double EqualTolSq = EqualTol * EqualTol;

inline bool AreEqual(double val1, double val2, double tol = EqualTol)
{
    double diff = val1 - val2;
    return diff <= tol && diff >= -tol;
}


//Vector Class----------------------------------------
class CVector3d
{
public:

    CVector3d(): m_x(0.0), m_y(0.0), m_z(0.0) {}
    CVector3d(double x, double y, double z): m_x(x), m_y(y), m_z(z) {}
    CVector3d(CComPtr<ISkpVector3d> vec);
    ~CVector3d() {}

    void SetDirection(double x, double y, double z){m_x=x; m_y=y; m_z=z;}

    double X() const {return m_x;}
    double Y() const {return m_y;}
    double Z() const {return m_z;}

    void SetX(double x) { m_x = x; }
    void SetY(double y) { m_y = y; }
    void SetZ(double z) { m_z = z; }

    CVector3d operator+(const CVector3d& vec) const;
    CVector3d operator-(const CVector3d& vec) const;
    void operator+=(const CVector3d& vec);
    void operator-=(const CVector3d& vec);

    CVector3d operator*(double scale) const;
    CVector3d operator/(double scale) const;
    void operator*=(double scale);
    void operator/=(double scale);

    bool operator==(const CVector3d& vec) const;
    bool operator!=(const CVector3d& vec) const;

protected:

    double m_x;
    double m_y;
    double m_z;

};


//Point Class----------------------------------------
class CPoint3d
{
public:

    CPoint3d(): m_x(0.0), m_y(0.0), m_z(0.0) {}
    CPoint3d(double x, double y, double z): m_x(x), m_y(y), m_z(z) {}
    CPoint3d(CComPtr<ISkpPoint3d> point);
    ~CPoint3d() {}

    void SetLocation(double x, double y, double z){m_x=x; m_y=y; m_z=z;}

    double X() const {return m_x;}
    double Y() const {return m_y;}
    double Z() const {return m_z;}

    void SetX(double x) { m_x = x; }
    void SetY(double y) { m_y = y; }
    void SetZ(double z) { m_z = z; }

    void operator+=(const CVector3d &vec);
    void operator-=(const CVector3d &vec);

    CPoint3d operator+(const CVector3d& vec) const;
    CPoint3d operator+(const CPoint3d& pt) const;
    CPoint3d operator-(const CVector3d& vec) const;
    CVector3d operator-(const CPoint3d& pt) const;

    CPoint3d operator* (double scale) const {return CPoint3d (m_x * scale, m_y * scale, m_z * scale);}
    void operator*= (double scale) {*this = *this * scale;}
    CPoint3d operator/ (double invScale) const {return *this * (1.0 / invScale);}
    void operator/= (double invScale) {*this = *this / invScale;}

protected:

    double m_x;
    double m_y;
    double m_z;

};


//Transformation Class--------------------------------
class CTransform
{
public:

    CTransform();
    CTransform(double m[16]);
    ~CTransform(void);

    void SetMatrix(double m[16]);
    void SetToIdenity();

    CPoint3d operator* (const CPoint3d& pt) const;
    CVector3d operator* (const CVector3d& vec) const;
    CTransform operator* (const CTransform& t) const;



protected: // data

    double m_t[16];

};


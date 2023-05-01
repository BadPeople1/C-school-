#include "CVector.h"

CVector::CVector():x(0),y(0)
{
}

CVector::CVector(int a,int b):x(a),y(b)
{
}

CVector CVector::operator+(const CVector &vec)
{
    CVector result;
    result.x=x+vec.x;
    result.y=y+vec.y;
    return result;
}

void CVector::print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
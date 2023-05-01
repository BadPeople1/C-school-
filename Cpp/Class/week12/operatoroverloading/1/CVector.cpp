#include "CVector.h"

CVector::CVector():x(0),y(0)
{
    count++;
}

CVector::CVector(int a,int b):x(a),y(b)
{
    count++;
}

CVector CVector::operator+(const CVector &vec)
{
    CVector result;
    result.x=x+vec.x;
    result.y=y+vec.y;
    return result;
}

CVector *CVector::operator+(const CVector *pvec)
{
    CVector* result=new CVector();
    result->x=this->x+pvec->x;
    result->y=this->y+pvec->y;
    return result;
}

void CVector::print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
    //cout<<"總共有"<<count<<"個CVector物件"<<endl;
}
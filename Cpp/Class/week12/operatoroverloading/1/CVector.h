#pragma once
#include<iostream>
using namespace std;

class CVector
{
private:
    int x,y;
public:
    CVector();
    CVector(int,int);
    CVector operator+(const CVector&);
    CVector* operator+(const CVector*);
    void print();
    static int count;
    ~CVector();
};
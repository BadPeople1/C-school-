#pragma once
#include<iostream>
using namespace std;
class shape
{
protected:
    int width,height;
public:
    shape(int,int);
    int area();
};
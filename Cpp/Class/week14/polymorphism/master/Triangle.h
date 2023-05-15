#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class Triangle:public shape
{
public:
    Triangle(int,int);
    int area();
}
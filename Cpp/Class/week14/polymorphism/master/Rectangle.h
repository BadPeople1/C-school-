#pragma once
#include<iostream>
#include"shape.h"
using namespace std;
class Rectangle:public shape
{
public:
    Rectangle(int,int);
    int area();
};
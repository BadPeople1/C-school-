#pragma once
#include <iostream>
#include "shape.h"
class Triangle :
    public shape
{
public:
    Triangle(int, int);
    int area();
};
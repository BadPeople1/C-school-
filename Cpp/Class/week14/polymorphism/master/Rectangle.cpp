#include"Rectangle.h"

Rectangle::Rectangle(int a=0,int b=0):shape{a,b}
{
}

int Rectangle::area()
{
    cout<<"衍生類別****的面積計算公式:"<<width*height<<endl;
    return width*height;
}
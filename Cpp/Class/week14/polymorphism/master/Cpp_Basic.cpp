#include<iostream>
#include"shape.h"
#include"Rectangle.h"

int main(){
    shape* shape=nullptr;
    Rectangle rec(10,7);
    shape=&rec;
    shape->area();
    rec.area();
    return 0;

    /*help me*/
}
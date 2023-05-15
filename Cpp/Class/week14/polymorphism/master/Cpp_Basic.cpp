#include<iostream>
#include"shape.h"
#include"Rectangle.h"
#include"Triangle.h"

int main(){
    shape* shape = nullptr;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);
	shape = &rec;
	shape->area();

	shape = &tri;
	shape->area();
	//rec.area();

	shape shape(10, 10);
	shape2.area();
	return 0;

    /*help me*/
}
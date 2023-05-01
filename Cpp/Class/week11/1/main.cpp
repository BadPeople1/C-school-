#include<iostream>
#include "Rectangle.h"

using namespace std;

int main(){
      
    //cout<<"Hello World!"<<endl;

    Rectangle rect1(3,4);
    cout<<"rect1高"<<rect1.getHeight()<<endl;
    cout<<"rect1寬"<<rect1.getWidth()<<endl;
    cout<<"rect1面積"<<rect1.area()<<endl;

    Rectangle rect2;
    cout<<"rect2高"<<rect2.getHeight()<<endl;
    cout<<"rect2寬"<<rect2.getWidth()<<endl;
    cout<<"rect2面積"<<rect2.area()<<endl;

    Rectangle* rect3 = new Rectangle(5,6);
    cout << "rect3 面積" << rect3->area() << endl;
    delete rect3;

    return 0;
}
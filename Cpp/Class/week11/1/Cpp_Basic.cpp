#include<iostream>
#include "Rectangle.h"

using namespace std;

int main(){
      
    //cout<<"Hello World!"<<endl;

    Rectangle rect1(3,4);
    cout<<"rect1面積"<<rect1.area()<<endl;

    Rectangle rect2;
    cout<<"rect2面積"<<rect2.area()<<endl;

    return 0;
}
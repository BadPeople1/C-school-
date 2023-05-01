#include<iostream>
#include "CVector.h"

using namespace std;

int main(){

    CVector vec1;
    CVector vec2(1,2);
    //CVector vec3{5,8};
    CVector vec3=vec1+vec2;
    
    cout<<"vec1=";
    vec1.print();
    cout<<"vec2=";
    vec2.print();
    cout<<"vec3=vec1+vec2=";
    vec3.print();

    return 0;
}
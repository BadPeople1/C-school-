#include<iostream>
#include "CVector.h"

using namespace std;

int CVector::count=0;

int main(){

    cout<<"程式執行前共有"<<CVector::count<<"個CVector物件"<<endl;
    
    CVector vec1;
    cout<<"程式執行前共有"<<vec1.count<<"個CVector物件"<<endl;

    CVector vec2(1,2);
    cout<<"程式執行前共有"<<vec2.count<<"個CVector物件"<<endl;

    //CVector vec3{5,8};

    CVector vec3=vec1+vec2;
    cout<<"程式執行前共有"<<vec3.count<<"個CVector物件"<<endl;
    
    cout<<"vec1=";
    vec1.print();
    cout<<"vec2=";
    vec2.print();
    cout<<"vec3=vec1+vec2=";
    vec3.print();

    CVector vec4(4,4);
    cout<<"vec4=";
    vec4.print();
    vec4=vec3+vec4;
    cout<<"vec4=vec3+vec4=";
    vec4.print();


    CVector* pvec1=new CVector(3,4);
    CVector* pvec2=new CVector(7,3);
    CVector* pvec3=nullptr;
    pvec3=*pvec1+pvec2;

    
    return 0;
}
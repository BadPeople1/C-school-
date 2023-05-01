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


    cout<<"產生pvec1,pvec2,pvec3前總共有"<<CVector::count<<"個物件"<<endl;

    CVector* pvec1=new CVector(3,4);
    CVector* pvec2=new CVector(7,3);
    CVector* pvec3=nullptr;
    pvec3=*pvec1+pvec2;

    cout<<"產生pvec1,pvec2,pvec3後總共有"<<pvec3->count<<"個物件"<<endl;
    cout<<"pvec1=";
    pvec1->print();
    cout<<"pvec2=";
    pvec2->print();
    cout<<"pvec3=";
    pvec3->print();

    delete pvec1;
    cout<<"刪除pvec1後,總共有"<<CVector::count<<"個CVector物件"<<endl;
    delete pvec2;
    cout<<"刪除pvec2後,總共有"<<CVector::count<<"個CVector物件"<<endl;
    delete pvec3;
    cout<<"刪除pvec3後,總共有"<<CVector::count<<"個CVector物件"<<endl;

    return 0;
}
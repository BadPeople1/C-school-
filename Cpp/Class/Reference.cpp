#include<iostream>

using namespace std;

void swap_by_reference(int& x, int&  y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return;
}; 

void swap_by_pointer(int* x, int* y){
    int temp;
    int x_value=*x;
    int y_value=*y;

    temp=x_value;
    x_value=y_value;
    y_value=temp;
    return;
};

int main(){
    int i=5;
    int j=20;
    double d;

    int& i_ref=i;
    double& d_ref=d;


    cout<<"Value of i="<<i<<endl;
    cout<<"Value of i reference="<<i_ref<<endl;

    i_ref=j;
    cout<<"Value of j="<<i<<endl;
    cout<<"Value of j reference="<<i_ref<<endl;

    d=11.5;
    cout<<"Value of d="<<d<<endl;
    cout<<"Value of d reference="<<d_ref<<endl;

    i=10;
    cout<<"Value of i="<<i<<endl;
    cout<<"Value of i reference="<<i_ref<<endl;

    int a=100;
    int b=200;
    cout<<"參考sawp前 a="<<a<<" "<<"b="<<b<<endl;
    swap_by_reference(a,b);
    cout<<"參考sawp後 a="<<a<<" "<<"b="<<b<<endl;

    cout<<"指標sawp前 a="<<a<<" "<<"b="<<b<<endl;
    swap_by_pointer(&a,&b);
    cout<<"指標sawp後 a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int x,y;
    int n1=10000;
    double n2;
    cin>>x>>y;
    n2=(x*x)+(y*y);
    if(n2<n1)
        cout<<"inside"<<endl;
    else
        cout<<"outside"<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int x=5,y=3,z=4;
    // cin>>x>>y>>z;
    int c=max(max(x,y),z);
    int a=min(min(x,y),z);
    int b=x+y+z-a-c;
    cout<<x<<y<<z<<endl;
    cout<<a<<b<<c<<endl;

    int a2=a*a;
    int b2=b*b;
    int c2=c*c;

    if(a+b<=c)
        cout<<"不能構成三角形"<<endl;
    else{
        if(a2+b2<c2)
            cout<<"鈍角三角形"<<endl;
        else if(a2+b2==c2)
            cout<<"直角三角形"<<endl;
        else
            cout<<"銳角三角形"<<endl;
    }
    return 0;
}
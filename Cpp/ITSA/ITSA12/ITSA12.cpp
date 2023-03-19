#include<iostream>

using namespace std;

int f(int n){
    if(n==0 or n==1)
        return n+1;
    else
        return (f(n-1)+f(n/2));
}

int main(){
    int k;
    cin>>k;
    cout<<f(k)<<endl;

    return 0;
}
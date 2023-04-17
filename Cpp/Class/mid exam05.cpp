#include<iostream>

using namespace std;

int Return(int n){
    if(n==0)
        return 1;
    else if(n>=1)
        return n*Return(n-1);
}

int main(){
    int n=5;
    int sum=1;
    cout<<Return(n)<<endl;;
    
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }

    cout<<sum<<endl;

    return 0;
}
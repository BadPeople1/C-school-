#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0)     cout<<"NO"<<endl;
    int temp1=0;
    int temp2=n;
    for(int i=0;i<n;i++){
        int rem=temp2%10;
        temp1=temp1*10+rem;
        temp2=(temp2-rem)/10;
        if(temp2==0)    break;
    }
    if(n==temp1)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return 0;
}
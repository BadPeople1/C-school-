#include<iostream>

using namespace std;

int main(){
    int n;
    int output[8]={0};
    cin>>n;

    if(n<0){
        n+=256;
    }
    
    for(int i=0;i<8;i++){
        output[i]=n%2;
        n=n/2;
    } 

    for(int i=7;i>=0;i--){
        cout<<output[i];
    }
    cout<<endl;

    return 0;
}
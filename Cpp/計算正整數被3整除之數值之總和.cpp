#include<iostream>

using namespace std;

int main(){
    int n;
    int sum=0;
    cin>>n;
    for(int i=0 ; i<=n ; i++){
        if(i % 3 == 0)
            sum=i+sum;
    }
    cout<<sum<<endl;
    return 0;
}
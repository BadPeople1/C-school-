#include<iostream>
#include<iomanip>

using namespace std;

double change(int n){
    double ans;
    ans=n*1.6;

    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(1)<<change(n)<<endl;
    return 0;
}
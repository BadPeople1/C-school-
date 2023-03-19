#include<iostream>

using namespace std;

int main(){
    int a,b,count = 0;
    cin >> a >> b;
    int data[a*b];
    for(int i=0;i<(a*b);i++){
        cin>>data[i];
    }

    for(int j=0;j<b;j++){
        for(int k=0;k<a;k++){
            count++;
                cout<<data[k*b+j];
            if(count%a!=0){
                cout<<" ";
            }
        }
        cout<<endl;
    }

    
    return 0;
}
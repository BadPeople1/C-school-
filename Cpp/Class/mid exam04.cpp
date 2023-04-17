#include<iostream>

using namespace std;

int main(){
    int n=100;
    int sum=0;

    for(int i=1;i<=n;i++){

        if(i%2==0)  sum+=i;

    }

    cout<<sum<<endl;

    sum=0;
    int i=1;

    while(i<=n){
        if(i%2==0) sum+=i;
        i++;
    }

    cout<<sum<<endl;

    sum=0;
    i=1;
    
    do{
        if(i%2==0) sum+=i;
        i++;
    }while(i<=n);

    cout<<sum<<endl;

    return 0;
}
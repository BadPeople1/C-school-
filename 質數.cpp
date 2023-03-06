#include<iostream>

using namespace std;

bool isPrime(int p){
    if(p<=1)
        return false;
    for(int i=1;i < p;i++){
        if(p%i==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    int j=0;
    int primes[100]={0};
    
    /*int b[3]={1,2,3};
    int c[2][3]=
    {
        {1,2,3},
        {4,5,6}
    };*/

    cout<<"輸入一個正整數n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
        	primes[j]=i;
        	j++;
		}
    }
    cout<<"小於等於"<<n<<"的質數有:"<<endl;
    for(int p:primes){
        if(p!=0)
            cout<<p<<endl;
    }
    return 0;
}
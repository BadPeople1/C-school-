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

    cin>>n;
    for(int i=1;i<=n;i++){
        if(isPrime(i)){
        	cout<<"YES"<<endl;
        	j++;
		}
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
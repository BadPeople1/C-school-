#include<iostream>
#include "Factorial.h"
using namespace std;

int main(){
    int n=5;

    Factorial ans(n);
    cout<<n<<"的階乘"<<ans.Ans()<<endl;

    return 0;
}
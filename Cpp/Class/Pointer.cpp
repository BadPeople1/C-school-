#include<iostream>

using namespace std;

int main(){
    int var = 20;
    int *ip;
    ip = &var;

    cout << "var=" << var <<endl;
    cout << "&var=" << &var <<endl;
    return 0;
}
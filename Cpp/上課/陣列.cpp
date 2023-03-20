#include<iostream>
#include<array>

using namespace std;

int main(){
    int a1[5]={1,2,3,4,5};
    array<int,5> a2={1,2,3,4,5};
    int b1[3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    array<array<int,3>,2> b2={1,2,3,4,5,6};

    return 0;
}
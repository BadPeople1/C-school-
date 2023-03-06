#include<iostream>
using namespace std;
int main(){
    int score;
    string grade;
    cout<<"請輸入分數:";
    cin>>score;
    if(score >= 90)
        grade="A";
    else if(score >= 80)
        grade="B";
    else if(score >= 70)
        grade="C";
    else if(score >= 60)
        grade="D";
    else    grade="E";
    cout<<grade<<endl;
    return 0;
}
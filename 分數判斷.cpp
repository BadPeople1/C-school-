#include<iostream>
using namespace std;
int main(){
    int score;
    string grade;

    cout<<"請輸入分數:";
    cin>>score;

    // switch case
    switch(score/10){
        case 10: case 9:
            grade="A";
            break;
        case 8:
            grade="B";
            break;
        case 7:
            grade="C";
            break;
        case 6:
            grade="D";
            break;
        default:
            grade="E";
    }

    // if else
    /*
    if(score >= 90)
        grade="A";
    else if(score >= 80)
        grade="B";
    else if(score >= 70)
        grade="C";
    else if(score >= 60)
        grade="D";
    else    grade="E";
    */

    cout<<grade<<endl;
    return 0;
}
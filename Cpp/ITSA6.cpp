#include<iostream>

using namespace std;

int main(){
    int n;
    string output;
    cin>>n;
    
    switch(n){
        case 3: case 4: case 5:{
            output="Spring";
            break;
        }
        case 6: case 7: case 8:{
            output="Summer";
            break;
        }
        case 9: case 10: case 11:{
            output="Autumn";
            break;
        }
        case 12: case 1: case 2:{
            output="Winter";
            break;;
        }
    }
    cout<<output<<endl;

    return 0;
}
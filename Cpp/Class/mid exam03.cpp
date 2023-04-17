#include<iostream>
#include <string>

using namespace std;

int main(){
    int n=18765;

    string str=to_string(n);
    int count=str.size();
    bool frist=true;
    
    for(int i=0; i<=str.size(); i++){
        
        if(str[count]=='0' && frist==true){

            cout<<str[count+1];

            frist=false;
        }
            
        else
            cout<<str[count];

        count--;
    }
    return 0;
}
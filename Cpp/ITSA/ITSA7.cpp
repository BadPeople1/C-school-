#include<iostream>

using namespace std;

int main(){
    int n;
    int a,b,c,d;
    char x;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> a >> b >> c >> d;
        switch(x){
            case '+':{
                cout << (a+c) << " " << (b+d) << endl;
                break;
            }
            case '-':{
                cout << (a-c) << " " <<(b-d) <<endl;
                break;
            }
            case '*':{
                cout << (a*c-b*d) << " "<< (b*c+a*d) <<endl;
                break;
            }
        }
    }
    return 0;
}
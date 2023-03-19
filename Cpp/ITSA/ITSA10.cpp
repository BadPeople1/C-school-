#include<iostream>

using namespace std;

int GCD(int a, int b){
    if(b) while((a %= b) && (b %= a));
	return a + b;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout << GCD(n1, n2) << endl;
    
    return 0;
}
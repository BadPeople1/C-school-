#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int h_in,m_in;
    int h_out,m_out;
    int h1,m1,total,pay;
    cin>>h_in>>m_in;
    cin>>h_out>>m_out;

    total=(h_out*60+m_out)-(h_in*60+m_in);
    
    if(total<=120)
        pay=total/30*30;
    else if(total<=240)
        pay=(total-120)/30*40+120;
    else
        pay=(total-240)/30*60+280;

    cout<<pay<<endl;
    
    return 0;
}
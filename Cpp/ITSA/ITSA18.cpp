#include<iostream>
#include<map>
#include<cctype>
#include<string>
using namespace std;

int main()
{
	string input;
	map<char,char> key;
	//因會將大寫轉小寫，固不必將大寫加入字典，其餘依題目要求輸入 
	key.insert(make_pair(' ',' '));key.insert(make_pair('!','@'));
	key.insert(make_pair('"','"'));key.insert(make_pair('#','$'));
	key.insert(make_pair('$','%'));key.insert(make_pair('%','^'));
	key.insert(make_pair('&','*'));key.insert(make_pair('\'','\''));
	key.insert(make_pair('(',')'));key.insert(make_pair(')','_'));
	key.insert(make_pair('*','('));key.insert(make_pair('+','+'));
	key.insert(make_pair(',','.'));key.insert(make_pair('-','='));
	key.insert(make_pair('.','/'));key.insert(make_pair('/','/'));
	key.insert(make_pair('0','-'));key.insert(make_pair('1','2'));
	key.insert(make_pair('2','3'));key.insert(make_pair('3','4'));
	key.insert(make_pair('4','5'));key.insert(make_pair('5','6'));
	key.insert(make_pair('6','7'));key.insert(make_pair('7','8'));
	key.insert(make_pair('8','9'));key.insert(make_pair('9','0'));
	key.insert(make_pair(':','\"'));key.insert(make_pair(';','\''));
	key.insert(make_pair('<','>'));key.insert(make_pair('=','='));
	key.insert(make_pair('>','?'));key.insert(make_pair('?','?'));
	key.insert(make_pair('@','#'));key.insert(make_pair('a','s'));
	key.insert(make_pair('b','n'));key.insert(make_pair('c','v'));
	key.insert(make_pair('d','f'));key.insert(make_pair('e','r'));
	key.insert(make_pair('f','g'));key.insert(make_pair('h','j'));
	key.insert(make_pair('g','h'));key.insert(make_pair('i','o'));
	key.insert(make_pair('j','k'));key.insert(make_pair('k','l'));
	key.insert(make_pair('l',';'));key.insert(make_pair('m',','));
	key.insert(make_pair('n','m'));key.insert(make_pair('o','p'));
	key.insert(make_pair('p','['));key.insert(make_pair('q','w'));
	key.insert(make_pair('r','t'));key.insert(make_pair('s','d'));
	key.insert(make_pair('t','y'));key.insert(make_pair('u','i'));
	key.insert(make_pair('v','b'));key.insert(make_pair('w','e'));
	key.insert(make_pair('x','c'));key.insert(make_pair('y','u'));
	key.insert(make_pair('z','x'));key.insert(make_pair('[',']'));
	key.insert(make_pair('\\','\\'));key.insert(make_pair(']','\\'));
	key.insert(make_pair('^','&'));key.insert(make_pair('_','='));
	key.insert(make_pair('`','1'));key.insert(make_pair('{','}'));
	key.insert(make_pair('|','|'));key.insert(make_pair('}','|'));
	key.insert(make_pair('~','!'));
	getline(cin,input);
	for(int i=0;i<input.length();i++)//把輸入的字串全轉小寫 
	{
		input[i]=tolower(input[i]);
	}
	for(int i=0;i<input.length();i++)//依字串的順序比對並輸出 
	{
		for(map<char,char>::iterator p=key.begin();p!=key.end();p++)
		{
			if(input[i]==p->first)cout<<p->second;
			if(input[i]==p->first&&i==input.length()-1)cout<<endl;
		}
	}
	return 0;
} 
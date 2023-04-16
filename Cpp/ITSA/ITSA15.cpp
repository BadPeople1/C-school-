#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int count = 1;
	int arr[26] = {0};
	int arr1[26] = {0};
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		arr[str[i] - 'A']++;
		else if (str[i] >= 'a' && str[i] <= 'z')
		arr1[str[i] - 'a']++;
		if (str[i] == ' ')
		count++;
	}
	cout << count << endl;
	for (int j = 0; j < 26; j++)
	{
		if (arr[j] != 0)
			cout << (char)('A' + j) << " : " << arr[j] << endl;
		else if (arr1[j] != 0)
			cout << (char)('a' + j) << " : " << arr1[j] << endl;
	}
	return 0;
}
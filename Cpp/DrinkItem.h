#pragma once
#include <iostream>
#include <string>
using namespace std;

class DrinkItem
{
	string drinkName;
	string drinkSize;
	int drinkPrice;
public:
	DrinkItem(const string&, const string&, int);
};

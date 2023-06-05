#pragma once
#include <vector>
#include "DrinkItem.h"
#include<iostream>
#include<fstream>

class OrderItem
{
	int drinkIndex;
	int quantity;
public:
	OrderItem(int, int);
	void displayOrderItem(vector<DrinkItem>&);
	int getIndex();
	int getQuantity();
	void printOrderItem(ofstream&, vector<DrinkItem>&);
};

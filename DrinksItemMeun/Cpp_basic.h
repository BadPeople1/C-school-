#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include"OrderItem.h"
using namespace std;
void AddNewDrink(vector<DrinkItem>& drinks);

void DisplayDrinkMenu(vector<DrinkItem>& drinks);

void OrderDrink(vector<OrderItem>&, vector<DrinkItem>&);

void CalcuateSalePrice(vector<OrderItem>&, vector<DrinkItem>&);
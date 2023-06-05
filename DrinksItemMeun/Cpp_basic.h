#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include<fstream>
#include<sstream>
#include "DrinkItem.h"
#include"OrderItem.h"
using namespace std;

void AddNewDrink(vector<DrinkItem>& drinks);

void DisplayDrinkMenu(vector<DrinkItem>& drinks);

void OrderDrink(vector<OrderItem>&, vector<DrinkItem>&);

void CalcuateSalePrice(vector<OrderItem>&, vector<DrinkItem>&);

void PrintOrder(vector<OrderItem>&, vector<DrinkItem>&, string&, string&, int, int);

string ReadFile(const string&);

vector<string> Split(const string&, char);
#include<iostream>
#include<vector>
#include"DrinkItem.h"

using namespace std;

void AddNewDrink(vector<DrinkItem>&drinks){
    drinks.push_back(DrinkItem("紅茶","大杯",60));
    drinks.push_back(DrinkItem("紅茶","小杯",40));
    drinks.push_back(DrinkItem("綠茶","大杯",60));
    drinks.push_back(DrinkItem("綠茶","小杯",40));
    drinks.push_back(DrinkItem("咖啡","大杯",80));
    drinks.push_back(DrinkItem("咖啡","小杯",50));
    drinks.push_back(DrinkItem("可樂","大杯",30));
    drinks.push_back(DrinkItem("可樂","小杯",20));
}

int main(){
    vector<DrinkItem> drinks;

    AddNewDrink(drinks);
    return 0;
}
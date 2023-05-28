#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class DrinkItem
{
	string drinkName;
	string drinkSize;
	int drinkPrice;
public:
	DrinkItem(const string&, const string&, int);
	void displayItem();
	string getName();
	string getSize();
	int getPrice();
};
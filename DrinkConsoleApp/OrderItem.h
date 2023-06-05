#pragma once
#include <vector>
#include <fstream>
#include "DrinkItem.h"

class OrderItem
{
	int drinkIndex;
	int quantity;
public:
	OrderItem(int, int);
	void displayOrderItem(vector<DrinkItem>&);
	void printOrderItem(ofstream&, vector<DrinkItem>&);
	int getIndex();
	int getQuantity();
};
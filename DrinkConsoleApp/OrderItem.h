#pragma once
#include <vector>
#include "DrinkItem.h"

class OrderItem
{
	int drinkIndex;
	int quantity;
public:
	OrderItem(int, int);
	void displayOrderItem(vector<DrinkItem>&);
	int getIndex();
	int getQuantity();
};


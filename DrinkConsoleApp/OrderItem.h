#pragma once
#include <iostream>
#include <vector>
#include "DrinkItem.h"
using namespace std;

class OrderItem
{
	int itemIndex;
	int quantity;
public:
	OrderItem(int, int);
	int getIndex();
	int getQuantity();
	void displayOrderItem(vector<DrinkItem>&);
};
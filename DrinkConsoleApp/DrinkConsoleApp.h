#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include "OrderItem.h"

using namespace std;

void AddNewDrink(vector<DrinkItem>&);

void DisplayDrinkMenu(vector<DrinkItem>&);

void OrderDrink(vector<OrderItem>&);

void CalculateSalePrice(vector<OrderItem>&);
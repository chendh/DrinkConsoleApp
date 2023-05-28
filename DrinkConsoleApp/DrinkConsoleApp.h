#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include "OrderItem.h"
using namespace std;

void AddNewDrink(std::vector<DrinkItem>& drinks);

void DisplayDrinkMenu(vector<DrinkItem>& drinks);

void OrderDrink(vector<OrderItem>& order, vector<DrinkItem>& drinks);

void CalculateSalePrice(vector<OrderItem>& order, vector<DrinkItem>& drinks);

#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include "OrderItem.h"

void AddNewDrink(std::vector<DrinkItem>&);
void DisplayDrinkMenu(vector<DrinkItem>&);
void OrderDrink(vector<OrderItem>&, vector<DrinkItem>&);
void CalculateSalePrice(vector<OrderItem>&, vector<DrinkItem>& drinks);
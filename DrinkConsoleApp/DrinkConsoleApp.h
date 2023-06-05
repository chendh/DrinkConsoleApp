#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include "DrinkItem.h"
#include "OrderItem.h"

using namespace std;

void AddNewDrink(vector<DrinkItem>&);

void DisplayDrinkMenu(vector<DrinkItem>&);

void OrderDrink(vector<OrderItem>&, vector<DrinkItem>&);

void CalculateSalePrice(vector<OrderItem>&, vector<DrinkItem>&);

void PrintOrder(vector<OrderItem>&, vector<DrinkItem>&, string&, string&, int, int);
#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include "DrinkItem.h"
#include "OrderItem.h"
using namespace std;

void AddNewDrink(std::vector<DrinkItem>& drinks);

void DisplayDrinkMenu(vector<DrinkItem>& drinks);

void OrderDrink(vector<OrderItem>& order, vector<DrinkItem>& drinks);

void CalculateSalePrice(vector<OrderItem>& order, vector<DrinkItem>& drinks);

string ReadFile(const string& filename);

vector<string> Split(const string& s, char delimiter);

void PrintOrder(vector<OrderItem>& order, vector<DrinkItem>& drinks, string messageTakeIn, int totalPrice, string messagePrice, int salePrice);
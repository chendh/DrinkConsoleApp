#include <iostream>
#include <vector>
#include <iomanip>
//#include <array>
#include "DrinkItem.h"
#include "DrinkConsoleApp.h"

void AddNewDrink(vector<DrinkItem>& drinks)
{
	//DrinkItem drink1("紅茶", "大杯", 60);
	//drinks.push_back(drink1);
	drinks.push_back(DrinkItem("紅茶", "大杯", 60));
	drinks.push_back(DrinkItem("紅茶", "小杯", 40));
	drinks.push_back(DrinkItem("綠茶", "大杯", 60));
	drinks.push_back(DrinkItem("綠茶", "小杯", 40));
	drinks.push_back(DrinkItem("咖啡", "大杯", 70));
	drinks.push_back(DrinkItem("咖啡", "小杯", 50));
	drinks.push_back(DrinkItem("可樂", "大杯", 40));
	drinks.push_back(DrinkItem("可樂", "小杯", 20));
}

void DisplayDrinkMenu(vector<DrinkItem>& drinks) {
	cout << setw(4) << "編號" << setw(10) << "飲料名稱" << setw(10) << "大小" << setw(10) << "售價" << endl;
	cout << "--------------------------------------" << endl;

	int i = 1;
	for (DrinkItem item : drinks) {
		cout << setw(4) << i;
		item.displayItem();
		i++;
	}

	//int i = 1;
	//vector<DrinkItem>::iterator v = drinks.begin();
	//while (v != drinks.end()) {
	//	cout << setw(4) << i;
	//	v->displayItem();
	//	v++;
	//	i++;
	//}
	cout << "--------------------------------------" << endl;
}

int main()
{
	vector<DrinkItem> drinks;
	//array<int, 5> a = { 1, 2, 3, 4, 5 };
	//array< array<int, 2>, 3> b = { 1, 2, 3, 4, 5, 6 };

	AddNewDrink(drinks);
	DisplayDrinkMenu(drinks);
}
#include "DrinkItem.h"

DrinkItem::DrinkItem(const string& name, const string& size, int price)
{
	drinkName = name;
	drinkSize = size;
	drinkPrice = price;
}

void DrinkItem::displayItem()
{
	cout << setw(10) << drinkName << setw(10) << drinkSize << setw(10) << drinkPrice << endl;
}

string DrinkItem::getName()
{
	return drinkName;
}

string DrinkItem::getSize()
{
	return drinkSize;
}

int DrinkItem::getPrice()
{
	return drinkPrice;
}

#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	drinkIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[drinkIndex - 1];
	cout << "您所點的飲料為： " << drinkitem.getName() << " " << drinkitem.getSize() << "，每杯 " << drinkitem.getPrice() << "元，總共 " << quantity << "杯，小計 " << drinkitem.getPrice() * quantity << "元。" << endl;
}

void OrderItem::printOrderItem(ofstream & output_file, vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[drinkIndex - 1];
	output_file << "您所點的飲料為： " << drinkitem.getName() << " " << drinkitem.getSize() << "，每杯 " << drinkitem.getPrice() << "元，總共 " << quantity << "杯，小計 " << drinkitem.getPrice() * quantity << "元。" << endl;
}

int OrderItem::getIndex()
{
	return drinkIndex;
}

int OrderItem::getQuantity()
{
	return quantity;
}

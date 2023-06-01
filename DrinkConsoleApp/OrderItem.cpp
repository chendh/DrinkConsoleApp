#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	itemIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[itemIndex - 1];
	cout << "您所點的飲料為： " << drinkitem.getName() << drinkitem.getSize() << " " << quantity << "杯，每杯 " << drinkitem.getPrice() << "元，小計 " << drinkitem.getPrice() * quantity << "元" << endl;
}

int OrderItem::getIndex()
{
	return itemIndex;
}

int OrderItem::getQuantity()
{
	return quantity;
}

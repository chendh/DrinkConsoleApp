#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	itemIndex = index;
	quantity = qty;
}

int OrderItem::getIndex()
{
	return itemIndex;
}

int OrderItem::getQuantity()
{
	return quantity;
}

void OrderItem::displayOrderItem(vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[itemIndex - 1];
	cout << "您所點的餐點為: " << drinkitem.getName() << " " << drinkitem.getSize() << "，每杯 " << drinkitem.getPrice() << "元， " << quantity << "杯，小計" << drinkitem.getPrice() * quantity << "元" << endl;
}
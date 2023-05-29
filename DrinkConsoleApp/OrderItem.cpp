#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	drinkIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[drinkIndex - 1];
	cout << "您所點的餐點為： " << drinkitem.getName() << " " << drinkitem.getSize() << " " << quantity << " 杯，每杯 " << drinkitem.getPrice() << "元，小計 " << drinkitem.getPrice() * quantity << "元" << endl;
}

int OrderItem::getIndex()
{
	return drinkIndex;
}

int OrderItem::getQuantity()
{
	return quantity;
}

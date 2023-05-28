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
	DrinkItem item = drinks[itemIndex - 1];
	cout << "您所點的餐點為: " << item.getName() << " " << item.getSize() << "，每杯 " << item.getPrice() << "元， " << quantity << "杯，小計" << item.getPrice() * quantity << "元" << endl;
}

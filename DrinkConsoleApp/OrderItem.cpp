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
	cout << "�z���I���\�I��: " << item.getName() << " " << item.getSize() << "�A�C�M " << item.getPrice() << "���A " << quantity << "�M�A�p�p" << item.getPrice() * quantity << "��" << endl;
}

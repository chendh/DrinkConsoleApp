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
	cout << "�z���I���\�I��: " << drinkitem.getName() << " " << drinkitem.getSize() << "�A�C�M " << drinkitem.getPrice() << "���A " << quantity << "�M�A�p�p" << drinkitem.getPrice() * quantity << "��" << endl;
}
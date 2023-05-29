#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	drinkIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[drinkIndex - 1];
	cout << "�z���I�����Ƭ��G " << drinkitem.getName() << " " << drinkitem.getSize() << "�A�C�M " << drinkitem.getPrice() << "���A�`�@ " << quantity << "�M�A�p�p " << drinkitem.getPrice() * quantity << "���C" << endl;
}

#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty)
{
	drinkIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[drinkIndex - 1];
	cout << "�z���I���\�I���G " << drinkitem.getName() << " " << drinkitem.getSize() << " " << quantity << " �M�A�C�M " << drinkitem.getPrice() << "���A�p�p " << drinkitem.getPrice() * quantity << "��" << endl;
}

int OrderItem::getIndex()
{
	return drinkIndex;
}

int OrderItem::getQuantity()
{
	return quantity;
}

void OrderItem::printOrderItem(ofstream& output_file, vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[drinkIndex - 1];
	output_file << "�z���I���\�I���G " << drinkitem.getName() << " " << drinkitem.getSize() << " " << quantity << " �M�A�C�M " << drinkitem.getPrice() << "���A�p�p " << drinkitem.getPrice() * quantity << "��" << endl;
}

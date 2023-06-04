#include "DrinkConsoleApp.h"

void AddNewDrink(vector<DrinkItem>& drinks)
{
	//DrinkItem drink1("紅茶", "大杯", 60);
	//drinks.push_back(drink1);
	//drinks.push_back(DrinkItem("紅茶", "大杯", 60));
	//drinks.push_back(DrinkItem("紅茶", "小杯", 40));
	//drinks.push_back(DrinkItem("綠茶", "大杯", 60));
	//drinks.push_back(DrinkItem("綠茶", "小杯", 40));
	//drinks.push_back(DrinkItem("咖啡", "大杯", 70));
	//drinks.push_back(DrinkItem("咖啡", "小杯", 50));
	//drinks.push_back(DrinkItem("可樂", "大杯", 40));
	//drinks.push_back(DrinkItem("可樂", "小杯", 20));

	string filename{"drinks.csv"};
	string filecontent = ReadFile(filename);
	vector<string> lines = Split(filecontent, '\n');
	for (string line : lines) {
		vector<string> fields = Split(line, ',');
		if (fields.size() == 3) {
			string name = fields[0];
			string size = fields[1];
			int price = stoi(fields[2]);
			DrinkItem drinkitem = DrinkItem(name, size, price);
			drinks.push_back(drinkitem);
		}
	}
}

string ReadFile(const string& filename)
{
	auto ss = ostringstream();
	ifstream input_file(filename);
	if (!input_file.is_open()) {
		cout << "無法讀取檔案 - '" << filename << "'" << endl;
		return "";
	}
	ss << input_file.rdbuf();
	return ss.str();
}

vector<string> Split(const string& s, char delimiter)
{
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

void DisplayDrinkMenu(vector<DrinkItem>& drinks) {
	cout << setw(4) << "編號" << setw(10) << "飲料名稱" << setw(10) << "大小" << setw(10) << "售價" << endl;
	cout << "--------------------------------------" << endl;

	int i = 1;
	for (DrinkItem item : drinks) {
		cout << setw(4) << i;
		item.displayItem();
		i++;
	}

	//int i = 1;
	//vector<DrinkItem>::iterator v = drinks.begin();
	//while (v != drinks.end()) {
	//	cout << setw(4) << i;
	//	v->displayItem();
	//	v++;
	//	i++;
	//}
	cout << "--------------------------------------" << endl;
}

void OrderDrink(vector<OrderItem>& order, vector<DrinkItem>& drinks) {
	int index;
	int qty;
	char ans = 'Y';
	do {
		cout << "請輸入要點的飲料編號：";
		cin >> index;
		cout << "請輸入要點的飲料數量：";
		cin >> qty;
		if (index < 1 || index > drinks.size()) {
			cout << "輸入飲料品項錯誤，請重新輸入" << endl;
		}
		else if (qty < 1) {
			cout << "輸入飲料數量錯誤，請重新輸入" << endl;
		}
		else {
			OrderItem orderitem = OrderItem(index, qty);
			order.push_back(orderitem);
			orderitem.displayOrderItem(drinks);
			cout << "是否繼續點餐？(Y或y鍵繼續訂餐)";
			cin >> ans;
		}
	} while (ans == 'Y' || ans == 'y');
}

void CalculateSalePrice(vector<OrderItem>& order, vector<DrinkItem>& drinks)
{
	int takeIn = 1;

	cout << endl;
	cout << "請問是內用還是外帶？(1:內用 2:外帶): ";
	cin >> takeIn;
	string messageTakeIn = (takeIn == 1) ? "內用" : "外帶";

	cout << "--------------------------------------" << endl;
	cout << "您所點的餐點如下：" << endl;
	cout << "--------------------------------------" << endl;

	int totalPrice = 0;
	int salePrice = 0;
	string messagePrice = "";

	for (OrderItem orderitem : order) {
		orderitem.displayOrderItem(drinks);
		DrinkItem drinkitem = drinks[orderitem.getIndex() - 1];
		totalPrice += drinkitem.getPrice() * orderitem.getQuantity();
	}
	if (totalPrice >= 500) {
		salePrice = totalPrice * 0.8;
		messagePrice = "訂購滿500元以上者8折";
	}
	else if (totalPrice >= 300) {
		salePrice = totalPrice * 0.9;
		messagePrice = "訂購滿300元以上者85折";
	}
	else if (totalPrice >= 200) {
		salePrice = totalPrice * 0.9;
		messagePrice = "訂購滿200元以上者9折";
	}
	else {
		salePrice = totalPrice;
		messagePrice = "訂購未滿200元者無折扣";
	}
	cout << "--------------------------------------" << endl;
	cout << "訂購方式：" << messageTakeIn << endl;
	cout << "總金額：" << totalPrice << endl;
	cout << messagePrice << endl;
	cout << "售價：" << salePrice << endl;
	cout << "--------------------------------------" << endl;

	//列印訂單
	PrintOrder(order, drinks, messageTakeIn, totalPrice, messagePrice, salePrice);
}

void PrintOrder(vector<OrderItem>& order, vector<DrinkItem>& drinks, string messageTakeIn, int totalPrice, string messagePrice, int salePrice)
{
	string filename{ "order.txt" };
	ofstream output_file(filename);
	if (!output_file.is_open()) {
		cout << "無法寫入檔案 - '" << filename << "'" << endl;
		return;
	}
	output_file << "--------------------------------------" << endl;
	output_file << "您所點的餐點如下：" << endl;
	output_file << "--------------------------------------" << endl;

	for (OrderItem orderitem : order) {
		orderitem.printOrderItem(output_file, drinks);
	}

	output_file << "--------------------------------------" << endl;
	output_file << "訂購方式：" << messageTakeIn << endl;
	output_file << "總金額：" << totalPrice << endl;
	output_file << messagePrice << endl;
	output_file << "售價：" << salePrice << endl;
	output_file << "--------------------------------------" << endl;
}

int main()
{
	vector<DrinkItem> drinks;
	vector<OrderItem> order;

	//新增飲料品項
	AddNewDrink(drinks);

	//顯示所有飲料菜單
	DisplayDrinkMenu(drinks);

	//點餐
	OrderDrink(order, drinks);

	//計算總金額與售價
	CalculateSalePrice(order, drinks);
}
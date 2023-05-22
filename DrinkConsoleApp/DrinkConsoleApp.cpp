#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include "DrinkConsoleApp.h"
using namespace std;

void AddNewDrink(vector<DrinkItem>& drinks)
{
    //DrinkItem drink1("紅茶", "大杯", 60);
    //drinks.push_back(drink1);
    //DrinkItem drink2("紅茶", "小杯", 40);
    //drinks.push_back(drink2);

    drinks.push_back(DrinkItem("紅茶", "大杯", 60));
    drinks.push_back(DrinkItem("紅茶", "小杯", 40));
    drinks.push_back(DrinkItem("綠茶", "大杯", 60));
    drinks.push_back(DrinkItem("綠茶", "小杯", 40));
    drinks.push_back(DrinkItem("咖啡", "大杯", 80));
    drinks.push_back(DrinkItem("咖啡", "小杯", 50));
    drinks.push_back(DrinkItem("可樂", "大杯", 30));
    drinks.push_back(DrinkItem("可樂", "小杯", 20));
}

void DisplayDrinkMenu(vector<DrinkItem>& drinks) {
    cout << setw(4) << "編號" << setw(10) << "飲料名稱" << setw(10) << "大小" << setw(10) << "售價" << endl;
    cout << "--------------------------------------" << endl;

    int i = 1;
    //for (DrinkItem item : drinks) {
    //    cout << setw(4) << i;
    //    item.displayItem();
    //    i++;
    //}

    //vector<DrinkItem>::iterator v = drinks.begin();
    //while (v != drinks.end()) {
    //    cout << setw(4) << i;
    //    v->displayItem();
    //    v++;
    //    i++;
    //}

    for (int j = 0; j < drinks.size(); j++) {
        cout << setw(4) << i;
        drinks[j].displayItem();
        i++;
    }
    cout << "--------------------------------------" << endl;
    cout << "總共有" << drinks.size() << "個飲料品項" << endl;
}

int main()
{
    vector<DrinkItem> drinks;

    AddNewDrink(drinks);
    DisplayDrinkMenu(drinks);

    return 0;
}

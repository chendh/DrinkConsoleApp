#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include "DrinkConsoleApp.h"

int main()
{
    vector<DrinkItem> drinks;

    AddNewDrink(drinks);
    DisplayDrinkMenu(drinks);
    return 0;
}

void AddNewDrink(vector<DrinkItem>& drinks)
{
    //DrinkItem drink1("紅茶", "大杯", 60);
    //drinks.push_back(drink1);

    drinks.push_back(DrinkItem("紅茶", "大杯", 60));
    drinks.push_back(DrinkItem("紅茶", "中杯", 40));
    drinks.push_back(DrinkItem("綠茶", "大杯", 60));
    drinks.push_back(DrinkItem("綠茶", "中杯", 40));
    drinks.push_back(DrinkItem("咖啡", "大杯", 80));
    drinks.push_back(DrinkItem("咖啡", "中杯", 60));
    drinks.push_back(DrinkItem("可樂", "大杯", 30));
    drinks.push_back(DrinkItem("可類", "中杯", 20));
}

void DisplayDrinkMenu(vector<DrinkItem>& drinks) {
    cout << setw(4) << "編號" << setw(10) << "飲料名稱" << setw(10) << "大小" << setw(10) << "價格" << endl;
    cout << "----------------------------------" << endl;

    int count = 1;
    //for (int i = 0; i < drinks.size(); i++) {
    //    cout << setw(4) << count;
    //    drinks[i].displayItem();
    //    count++;
    //}

    //for (DrinkItem item : drinks) {
    //    cout << setw(4) << count;
    //    item.displayItem();
    //    count++;
    //}

    vector<DrinkItem>::iterator v = drinks.begin();
    while (v != drinks.end()) {
        cout << setw(4) << count;
        v->displayItem();
        v++;
        count++;
    }


    cout << "----------------------------------" << endl;
    cout << "總共有" << drinks.size() << "項飲品" << endl;
}

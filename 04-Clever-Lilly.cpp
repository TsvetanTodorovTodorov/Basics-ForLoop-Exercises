#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    double price; //washing machine
    cin >> price;
    int dollPrice;
    cin >> dollPrice;

    int dolls = 0;
    int money = 0; 
    int giftMoney = 0;

    for (int i = 1; i <= age; i++) {
        if (i % 2 != 0)
        {
            dolls++;
        } else
        {
            giftMoney += 10;
            money += giftMoney; // its 10, but his brother took 1
        }
    }

    double moneyFromSellingDolls = dolls * dollPrice;
    double totalMoney = moneyFromSellingDolls + money - (age / 2);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalMoney >= price)
    {
        cout << "Yes! " << totalMoney - price << endl;
    } else
    {
        cout << "No! " << price - totalMoney << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tabs, salary;
    cin >> tabs >> salary;

    for (int i = 0; i < tabs; i++) {
        string text;
        cin.ignore();
        cin >> text;

        if (text == "Facebook")
        {
            salary -= 150;
        } else if (text == "Instagram")
        {
            salary -= 100;
        } else if (text == "Reddit")
        {
            salary -= 50;
        }

        if (salary <= 0)
        {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }
    
    cout << salary << endl;

    return 0;
}
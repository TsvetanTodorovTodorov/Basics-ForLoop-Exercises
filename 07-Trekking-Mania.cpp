#include <iostream>
using namespace std;

int main()
{
    int groups;
    cin >> groups;

    int peopleCount = 0;

    double musala, monblan, kilimanjaro, k2, everest = 0.0;

    for (int i = 0; i < groups; i++) {
        int group;
        cin >> group;
        peopleCount += group;

        if ( group <= 5)
        {
            musala += group;
        } else if (group <= 12)
        {
            monblan += group;
        } else if (group <= 25)
        {   
            kilimanjaro += group;
        } else if (group <= 40)
        {   
            k2 += group;
        } else if (group >= 41)
        {
            everest += group;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << (musala / peopleCount) * 100 << '%' << endl; // double / int * 100 --- works
    cout << (monblan / peopleCount) * 100 << '%' << endl;
    cout << (kilimanjaro / peopleCount) * 100 << '%' << endl;
    cout << (k2 / peopleCount) * 100 << '%' << endl;
    cout << (everest / peopleCount) * 100 << '%' << endl;

    return 0;
}
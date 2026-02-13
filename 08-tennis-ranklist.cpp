#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tournements, initialPoints;
    cin >> tournements >> initialPoints;
    int points = 0;
    double counter = 0;

    for (int i = 0; i < tournements; i++)
    {
        string achivement;
        cin >> achivement;

        if (achivement == "W")
        {
            points += 2000;
            counter++;
        } else if (achivement == "F")
        {
            points += 1200;
        } else if (achivement == "SF")
        {
            points += 720;
        }
    }

    double avr = points / tournements;



    cout << "Final points: " << points + initialPoints << endl;
    cout << "Average points: " << floor(avr) << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << (counter / tournements) * 100 << '%' << endl;
    
    return 0;
}

// 5 - брой турнири
// 1400 - начални точки
// F
// SF
// W
// W
// SF
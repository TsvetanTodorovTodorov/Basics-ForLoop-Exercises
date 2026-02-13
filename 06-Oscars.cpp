#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    double points;
    cin >> points;
    int numberOfActors;
    cin >> numberOfActors;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 0; i < numberOfActors; i++) {
        cin.ignore();
        string actor;
        getline(cin, actor);
        double actorLength = actor.length();
        double hisPoints;
        cin >> hisPoints;

        points += (actorLength * hisPoints) / 2;

        if (points > 1250.5)
        {

            cout << "Congratulations, " << name << " got a nominee for leading role with " << points << "!" << endl;

            return 0;
        }
    }

    cout << "Sorry, " << name << " you need " << 1250.5 - points << " more!" << endl;

    return 0;
}
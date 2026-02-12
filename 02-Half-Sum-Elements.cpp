#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxNumber = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {

        int num;
        cin >> num;

        if (num > maxNumber)
        {
            maxNumber = num;
        }
        sum += num;

    }

    int diff = sum - maxNumber;

    if (diff == maxNumber)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << diff << endl;
    } else
    {
        cout << "No" << endl;
        cout << "Diff = " << abs(maxNumber - diff) << endl;
    }

    return 0;
}
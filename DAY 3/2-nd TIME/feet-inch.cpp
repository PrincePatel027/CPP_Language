#include <iostream>
using namespace std;

class Meter
{
public:
    int feet, inch;
};

int main()
{
    Meter meter[3];

    int i;

    for (i = 0; i < 2; i++)
    {
        cout << "Enter Feet : "; // 8
        cin >> meter[i].feet;    // 16
        cout << "Enter Inch : "; // 4
        cin >> meter[i].inch;    // 14       // 14  // 6
    }

    meter[2].feet = (meter[0].feet + meter[1].feet) + ((meter[0].inch + meter[1].inch) / 12);
    meter[2].inch = (meter[0].inch + meter[1].inch) % 12;

    cout << "Feet : " << meter[2].feet << endl;
    cout << "Inch : " << meter[2].inch << endl;

    return 0;
}
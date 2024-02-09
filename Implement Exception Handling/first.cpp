#include <iostream>
using namespace std;

int main()
{
    float a, b, division, vision;

    cout << "enter First Number : ";
    cin >> a;
    cout << "enter Second Number : ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }
        else if (a == 0)
        {
            throw a;
        }
        division = a / b;
        cout << "Your Division Of A And B : " << division << endl;
    }
    catch (float b)
    {
        cout << "Can't Divide By Zero : " << b << endl;
    }
    catch (...)
    {
        cout << "Error : " << endl;
    }

    return 0;
}

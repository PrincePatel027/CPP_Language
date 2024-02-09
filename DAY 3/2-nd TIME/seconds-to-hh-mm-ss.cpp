#include <iostream>
using namespace std;

class H_M_S_converter
{
public:
    int second, minute, hour;
};

int main()
{
    H_M_S_converter second;

    cout << "Enter Second : ";
    cin >> second.second;

    second.hour = second.second / 3600;
    second.minute = (second.second / 60) % 60;
    second.second %= 60;

    cout << endl << second.hour << " : " << second.minute << " : " << second.second << endl;

    return 0;
}
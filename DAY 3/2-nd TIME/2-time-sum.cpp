#include <iostream>
using namespace std;

class Time_Sum
{
public:
    int hour, minute, second;
};

int main()
{
    Time_Sum time[3];

    int i;

    for (i = 0; i < 2; i++)
    {
        cout << "Enter Time In Hours: ";
        cin >> time[i].hour;
        cout << "Enter Time In Minutes: ";
        cin >> time[i].minute;
        cout << "Enter Time In Seconds: ";
        cin >> time[i].second;
    }

    time[2].second = (time[0].second + time[1].second) % 60;
    time[2].minute = (time[0].minute + time[1].minute) % 60;
    time[2].hour = ((time[0].hour + time[1].hour) + (time[0].minute + time[1].minute) / 60);

    cout << endl
         << time[2].hour << " : " << time[2].minute << " : " << time[2].second << endl;

    return 0;
}
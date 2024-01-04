#include<iostream>
using namespace std;

class Time {
public:
    int minute, hour, second;
};

int main() {
    Time t[3];

    int i, temp = 0;

    for (i = 0; i < 2; i++) 
	{
        cout << "Enter Hour : ";
        cin >> t[i].hour;
        cout << "Enter Minute : ";
        cin >> t[i].minute;
        cout << "Enter Second : ";
        cin >> t[i].second;
        cout << endl ;
    }

    t[2].second = t[0].second + t[1].second ;
    t[2].minute = t[0].minute + t[1].minute + ( t[2].second / 60 );
    t[2].hour = t[0].hour + t[1].hour + t[2].minute / 60 ;
    t[2].second %= 60 ;
    t[2].minute %= 60 ;
    

    cout << "---------------------------------Your Time Is Here---------------------------------" << endl;

    cout << "Your Time Is :  " << t[2].hour << " : " << t[2].minute << " : " << t[2].second << endl;

    return 0;
}


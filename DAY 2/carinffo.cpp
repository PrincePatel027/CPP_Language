#include<iostream>
using namespace std;

class Cars{
    public:
        int car_id;
        string car_company_name;
        string car_color;
        string car_model;
        int car_release_year;
};

int main()
{
    Cars car[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        cout << "Fill Car no : " << i+1 << " Details" << endl;
        cout << endl;

        cout << "Enter car id: ";
        cin >> car[i].car_id;
        cout << "Enter car company name: ";
        cin >> car[i].car_company_name;
        cout << "Enter car color: ";
        cin >> car[i].car_color;
        cout << "Enter car model: ";
        cin >> car[i].car_model;
        cout << "Enter car release year: ";
        cin >> car[i].car_release_year;
        cout << endl; 
    }

    cout << "----------------------------------------------------------------------------------------------" << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "Car no : " << i+1 << endl;
        cout << endl;
        cout << "Car id : " << car[i].car_id << endl;
        cout << "Car company name : " << car[i].car_company_name << endl;
        cout << "Car color : " << car[i].car_color << endl;
        cout << "Car model : " << car[i].car_model << endl;
        cout << "Car release year : " << car[i].car_release_year << endl;
        cout << endl;
    }
    
    return 0;
}

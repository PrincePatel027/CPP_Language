#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    string cource;
    string email;
    string city;
    string collage;

public:
    setData()
    {
        cout << "Enter id : ";
        cin >> id;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Cource : ";
        cin >> cource;
        cout << "Enter Email : ";
        cin >> email;
        cout << "Enter City : ";
        cin >> city;
        cout << "Enter Collage : ";
        cin >> collage;
    }
    getData()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "City : " << city << endl;
        cout << "cource : " << cource << endl;
        cout << "Email : " << email << endl;
        cout << "collage : " << collage;
    }
};

int main()
{
    Student stdnt[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        setData();
    }
    for (i = 0; i < 5; i++)
    {
        getData();
    }

    return 0;
}

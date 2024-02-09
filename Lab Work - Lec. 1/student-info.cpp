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
        cin >> this->id;
        cout << "Enter Name : ";
        cin >> this->name;
        cout << "Enter Age : ";
        cin >> this->age;
        cout << "Enter Cource : ";
        cin >> this->cource;
        cout << "Enter Email : ";
        cin >> this->email;
        cout << "Enter City : ";
        cin >> this->city;
        cout << "Enter Collage : ";
        cin >> this->collage;
        cout << endl ;
    }
    getData()
    {
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "City : " << this->city << endl;
        cout << "cource : " << this->cource << endl;
        cout << "Email : " << this->email << endl;
        cout << "collage : " << this->collage;
        cout << endl ;
    }
};

int main()
{
    Student stdnt[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        stdnt[i].setData();
    }
    for (i = 0; i < 5; i++)
    {
        stdnt[i].getData();
    }

    return 0;
}

#include <iostream>
using namespace std;

class A {
public:
    string id, name, role;

    void setData() {
        cout << "\t<-----------------------------------------------><------------------------------------------------>"<<endl << endl;
        cout << "\t\t\t\t\tEnter Employee Id :- ";
        cin >> this->id;
        cout << "\t\t\t\t\tEnter Employee Name :- ";
        cin >> this->name;
        cout << "\t\t\t\t\tEnter Employee Role :- ";
        cin >> this->role;
    }
};

class B : public A {
public:
    int salary, experience;

    void setData() {
        A::setData();
        cout << "\t\t\t\t\tEnter Employee Salary :- ";
        cin >> salary;
        cout << "\t\t\t\t\tEnter Employee Experience :- ";
        cin >> experience;
    }
};

class C : public B {
public:
    string cmpnyName, address;

    void setData() {
        B::setData();
        cout << "\t\t\t\t\tEnter Company Name :- ";
        cin >> cmpnyName;
        cout << "\t\t\t\t\tEnter Company Address :- ";
        cin >> address;
    }
};

class D : public C {
public:
    string email, contact;

    void setData() {
        C::setData();
        cout << "\t\t\t\t\tEnter Employee E-mail :- ";
        cin >> email;
        cout << "\t\t\t\t\tEnter Employee Contact :- ";
        cin >> contact;
        cout << "\n\t<-----------------------------------------------><------------------------------------------------>"<<endl << endl;
    }

    void getData() {
        cout << "\t<-----------------------------------------------><------------------------------------------------>"<<endl << endl;
        cout << "\t\t\t\t\tEmployee Name :- " << name << endl;
        cout << "\t\t\t\t\tEmployee Id :- " << id << endl;
        cout << "\t\t\t\t\tEmployee Address :- " << address << endl;
        cout << "\t\t\t\t\tEmployee Role :- " << role << endl;
        cout << "\t\t\t\t\tEmployee Email :- " << email << endl;
        cout << "\t\t\t\t\tEmployee Contact :- " << contact << endl;
        cout << "\t\t\t\t\tEmployee Comapany Name :- " << cmpnyName << endl;
        cout << "\t\t\t\t\tEmployee Experience :- " << experience << endl;
        cout << "\t\t\t\t\tEmployee Salary :- " << salary << endl << endl ;
        cout << "\t<-----------------------------------------------><------------------------------------------------>"<<endl << endl;
    }
};

int main() {

    int i,n;

    cout << "\t\t\t\t\tEnter Employee Quntity :- " ;
    cin >> n ;
    cout << endl ;

    D employee[n];

    for(i=0;i<n;i++)
    {
        employee[i].setData();
    }

    for(i=0;i<n;i++)
    {
        employee[i].getData();
    }

    return 0;
}


#include<iostream>
using namespace std; 

class Employee{
    public:
        int emp_id;
        string emp_name;
        string emp_role;
        int emp_age;
        int emp_salary;
        int emp_experience;
        string emp_city;
        string emp_company_name;
};

int main()
{
    Employee emp[5];

    int i;

    for(i=0;i<5;i++)
    {
        cout << "Employee No : " << i+1 << endl << endl;
        cout<<"Enter Employee ID: ";
        cin>>emp[i].emp_id;
        cout<<"Enter Employee Name: ";
        cin>>emp[i].emp_name;
        cout<<"Enter Employee Role: ";
        cin>>emp[i].emp_role;
        cout<<"Enter Employee Age: ";
        cin>>emp[i].emp_age;
        cout<<"Enter Employee Salary: ";
        cin>>emp[i].emp_salary;
        cout<<"Enter Employee Experience: ";
        cin>>emp[i].emp_experience;
        cout<<"Enter Employee City: ";
        cin>>emp[i].emp_city;
        cout<<"Enter Employee Company Name: ";
        cin>>emp[i].emp_company_name;
        cout<<endl;
    }

    cout << "---------------------------------------------------------------------------------------" << endl;

    for(i=0;i<5;i++)
    {
        cout << "Employee " << i+1 << " Details" << endl ;
        cout << endl ;

        cout << "Employee ID : " << emp[i].emp_id << endl ;
        cout << "Employee Name : " << emp[i].emp_name << endl ;
        cout << "Employee Role : " << emp[i].emp_role << endl ;
        cout << "Employee Age : " << emp[i].emp_age << endl ;
        cout << "Employee Salary : " << emp[i].emp_salary << endl ;
        cout << "Employee Experience : " << emp[i].emp_experience << endl ;
        cout << "Employee City : " << emp[i].emp_city << endl ;
        cout << "Employee Company Name : " << emp[i].emp_company_name << endl ;
        cout << endl ;
    }
    return 0;
}

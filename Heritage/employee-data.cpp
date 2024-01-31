#include<iostream>
using namespace std ;

class Empy {
	public:
		string name ;
		int age ;
		
		Empy(){
			cout << "Enter Employee Name :- " ;
			cin >> this->name ;
			cout << "Enter Employee Age :- " ;
			cin >> this->age ;
		}
};

class Employee {
	public:
		string location ;
		string position ;
		int salary ;

		Employee(){
			cout << "Enter Employee Address :- " ;
			cin >> this->location ;
			cout << "Enter Employee Position :- " ;
			cin >> this->position ;
			cout << "Enter Employee salary :- " ;
			cin >> this->salary ;
		}
};

class Employee1 {
	public:
		string id,email ;

		Employee1(){
			cout << "Enter Employee Id :- " ;
			cin >> this->id ; 
			cout << "Enter Employee Email :- " ;
			cin >> this->email ; 
		}
};

class Employee2 : public Empy , public Employee , public Employee1 {
	public: 
		string num,startingDate;

		Employee2()
		{
			cout << "Enter Employee Number :- " ;
			cin >> this->num ;
			cout << "Enter Starting Date Number :- " ;
			cin >> this->startingDate ;
			cout << endl;
		}
		getData()
		{
			cout << "Employee Email Is :- " << email << endl ;
			cout << "Employee Id Is :- " << id << endl ;
			cout << "Employee Name Is :- " << name << endl ;
			cout << "Employee Age Is :- " << age << endl ; 
			cout << "Employee Location Is :- " << location << endl ;
			cout << "Employee Position Is :- " << position << endl ;
			cout << "Employee Salary Is :- " << salary << endl ;
			cout << "Employee Number Is :- " << num << endl ;
			cout << "Employee Starting Date Is :- " << startingDate << endl << endl ;
		}
};

int main()
{
	int i,n;

	cout << "Enter Employee Quntity :- " ;
	cin >> n ;

	Employee2 person[n];

	for(i=0;i<n;i++)
	{
		cout << "Employee No :- " << i+1 << endl ;
		person[i].getData();
	}

	return 0;
}

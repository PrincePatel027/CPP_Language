#include<iostream>
using namespace std;

class Customer{
	private :
		int id,age;
		string name,tele_brand,mobile_num,city,sim_validity;
	
	public :
		getValue(){
			cout << "Enter Id : " ;
			cin >> this-> id ;
			cout << "Enter Name : " ;
			cin >> this-> name ;
			cout << "Enter Age : " ;
			cin >> this-> age ;
			cout << "Enter telecom brand : " ;
			cin >> this-> tele_brand ;
			cout << "Enter Mobile number : " ;
			cin >> this-> mobile_num ;
			cout << "Enter City : " ;
			cin >> this-> city ;
			cout << "Enter sim-card Validity : " ;
			cin >> this-> sim_validity ;
			cout << endl ;
		}
		
		printValue(){
			cout << "Id Is : " << this->id << endl ;
			cout << "Name Is : " << this->name << endl ;
			cout << "Age Is : " << this->age << endl ;
			cout << "Telecom Brand Is : " << this->tele_brand << endl ;
			cout << "Mobile number Is : " << this->mobile_num << endl ;
			cout << "City Is : " << this->city << endl ;
			cout << "Sim-card Validity Is : " << this->sim_validity << endl ;
			cout << endl ;
		}
};

int main()
{
	int i;
	Customer people[5];
	
	for(i=0;i<5;i++)
	{
		people[i].getValue();
	}
	
	for(i=0;i<5;i++)
	{
		people[i].printValue();
	}
	
	
	return 0;
}

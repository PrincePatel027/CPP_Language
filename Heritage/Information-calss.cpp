#include<iostream>
using namespace std ;

class Animal {
	public:
		string name;
		float avgLife ;
		string place ;
		float currentAge;
		
		setValueZebra()
		{
			cout << "Enter Zebra Name : " ;
			cin >> this->name ;
			cout << "Enter Zebra Current Age : " ;
			cin >> this->currentAge ;
			cout << "Enter Zebra Place Of Origin : " ;
			cin >> this->place ;
			cout << "Enter Zebra Average Life : " ;
			cin >> this->avgLife ;
			cout << endl ;
		}
		
		setValueDolphine()
		{
			cout << "Enter Dolphin Name : " ;
			cin >> this->name ;
			cout << "Enter Dolphin Current Age : " ;
			cin >> this->currentAge ;
			cout << "Enter Dolphin Place Of Origin : " ;
			cin >> this->place ;
			cout << "Enter Dolphin Average Life : " ;
			cin >> this->avgLife ;
			cout << endl ;
		}
};

class Zebra : public Animal {
	public:
		getZebra()
		{
			cout << "Zebra Name Is : " << name << endl ;
			cout << "Zebra Place Of Origin Is : " << place << endl ;
			cout << "Zebra Current Age Is : " << currentAge << endl ;
			cout << "Zebra Avradge Life Is : " << avgLife << endl << endl ;
		}
};

class Dolphine : public Animal {
	public:
		getDolphine()		
		{
			cout << "Dolphin Name Is : " << name << endl ;
			cout << "Dolphin Place Of Origin Is : " << place << endl ;
			cout << "Dolphin Current Age Is : " << currentAge << endl ;
			cout << "Dolphin Avradge Life Is : " << avgLife << endl << endl ;
		}
};

int main()
{
	Zebra animal1;
	animal1.setValueZebra();
	
	Dolphine animal2;
	animal2.setValueDolphine();
	
	animal1.getZebra();
	animal2.getDolphine();
}

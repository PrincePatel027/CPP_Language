#include<iostream>
using namespace std;

class Main {
    public:
        float number ;
};

class Square : public Main {
    public:
        Square()
        {
        	cout << "\t<--------------------------------------><--------------------------------------->" << endl << endl ;
            cout << "\t\t\t\tEnter Number Can You Square = " ;
            cin >> number ;
            cout << endl << "\t\t\t\tYour Square Number Is :- " << number*number << endl << endl; 
            cout << "\t<--------------------------------------><--------------------------------------->" << endl << endl ;
        }
};

class Cube : public Main {
    public:
        Cube()
        {
            cout << "\t\t\t\tEnter Number Can You Cube = " ;
            cin >> number ;
            cout << endl << "\t\t\t\tYour Cube Number Is :- " << number*number*number << endl << endl; 
            cout << "\t<--------------------------------------><--------------------------------------->" << endl << endl ; 
        }
};

int main()
{
	Square s1;
	Cube c1;

    return 0 ;
}

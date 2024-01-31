#include<iostream>
using namespace std ;

class Mother {
	public:
		Display()
		{
			cout << "This is Mother Class" << endl ;
		}
};

class Daughter : public Mother {
	public:
		Display()
		{
			cout << "This is Daughter Class" << endl ;
		}
};



int main(){
	
	Daughter p1;
	p1.Mother::Display();
	p1.Display();
	
	return 0 ;
}

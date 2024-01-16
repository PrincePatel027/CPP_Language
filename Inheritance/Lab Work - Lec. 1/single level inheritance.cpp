#include<iostream>
using namespace std ;

class A{
	public:
		int a,b,c;
};

class B : public A{
	public:
		setData()
		{
			cout << "Enter the value of A : " ;
			cin >> this->a;
			cout << "Enter the value of B : " ;
			cin >> this->b;
			cout << "Enter the value of C : " ;
			cin >> this->c;
			cout << endl ;
		}
		getData()
		{
			a = a * a * a ;
			b = b * b * b ;
			c = c * c * c ;
			cout << "Your Sum Of all Cube Number is : " << a+b+c << endl << endl ;
		}
};

int main(){
	
	B prog1;
	
	prog1.setData();
	prog1.getData();
	
	return 0;
}

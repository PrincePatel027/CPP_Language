#include<iostream>
using namespace std ;

class W {
	public:
		int a ;
};

class X : public W {
	public:
		int b ;
};

class Y : public W {
	public:
		int c ;
};

class Z : public X , public Y {
	public:
		int d ;
		sum(){
			cout << "Enter First Value : " ;
			cin >> this->X::a ;
			cout << "Enter Second Value : " ;
			cin >> this->b ;
			cout << "Enter Third Value : " ;
			cin >> this->c ;
			cout << "Enter Forth Value : " ;
			cin >> this->d ;
			cout << endl ;
			cout << "Your Sum Of All Numbers Are : " << this->X::a + this->b +this->c + this->d << endl ;
		}
};

int main()
{
	
	Z value1;
	
	value1.sum();
	
	
	return 0 ;
}


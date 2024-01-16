#include<iostream>
using namespace std ;

class X{
	public:
		float fN;
		
		firstValue(){
			cout << "Enter The First Value : " ;
			cin >> fN ;
			return fN ;
		}
};

class Y : public X {
	public:
		float sN;
		
		secondValue(){
			cout << "Enter The Second Value : ";
			cin >> sN ;
			return sN ;
		}
};

class Z : public X {
	public:
		float tN;
		
		thirdValue()
		{
			cout << "Enter The Third Value : " ;
			cin >> tN ;
			return tN ;
		}
};

class P : public Z, public Y {
	public : 
		float foN;
		
		forthValue()
		{
			cout << "Enter The Forth Value : " ;
			cin >> foN ;
			return foN ;
		}
		
	suM(){
		cout << endl ;
		cout << "Your All Numbers Sum Is : " << this->Y::fN + this->sN + this->tN + this->foN << endl ;
	}
};

int main()
{
	P value1;
	
	value1.Y::firstValue();
	value1.secondValue();
	value1.thirdValue();
	value1.forthValue();
	value1.suM();
	
	return 0;
}


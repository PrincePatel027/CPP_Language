#include<iostream>
using namespace std ;

class RBI{
	private:
		int interest,amount=100000;
	public:
		int amountSBI()
		{
			amount = 100000 ;
			cout << "[ SBI ] -> Enter Rate Of Interest : " ;
			cin >> this->interest ;
			cout << endl ;
			this->amount = this->amount + ( (this->amount * this->interest ) /100) ;
			return amount ;
		}
		int amountBOB()
		{
			amount = 100000 ;
			cout << "\n[ BOB ] -> Enter Rate Of Interest : " ;
			cin >> this->interest ;
			cout << endl ;
			this->amount = this->amount + ( (this->amount * this->interest ) /100) ;
			return amount ;
		}
		int amountICICI()
		{
			amount = 100000 ;
			cout << "\n[ ICICI ] -> Enter Rate Of Interest : " ;
			cin >> this->interest ;
			cout << endl ;
			this->amount = this->amount + ( (this->amount * this->interest ) /100) ;
			return amount ;
		}
};

class SBI : public RBI {
	public:
		SBI()
		{
			cout << "Your SBI Amount Of All Interest In 1 Year Is : " <<  amountSBI() << endl << endl;
		}
};

class BOB : public RBI {
	public:
		BOB()
		{
			cout << "Your BOB Amount Of All Interest In 1 Year Is : " << amountBOB() << endl << endl;
		}
};

class ICICI : public RBI {
	public:
		ICICI()
		{
			cout << "Your ICICI Amount Of All Interest In 1 Year Is : " << amountICICI() << endl << endl;
		}
};



int main()
{
	SBI person1;
	BOB person2;
	ICICI person3;
	return 0;
}

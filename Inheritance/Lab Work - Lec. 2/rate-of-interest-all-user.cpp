#include<iostream>
using namespace std ;

class RBI{
	private:
		float rateOfInterest,amount;
		
	public:
		getSBI(){
			cout << "Enter Amount [ SBI ] : " ;
			cin >> this->amount ;
			cout << "Enter Rate Of Interest [ SBI ] : " ;
			cin >> this->rateOfInterest ;
			this->amount = this->amount + ( ( this->amount*rateOfInterest ) / 100 ) ;
			return amount ;
		}
		getBOB(){
			cout << "Enter Amount [ BOB ] : " ;
			cin >> this->amount ;
			cout << "Enter Rate Of Interest [ BOB ] : " ;
			cin >> this->rateOfInterest ;
			this->amount = this->amount + ( ( this->amount*rateOfInterest ) / 100 ) ;
			return amount ;
		}
		getICICI(){
			cout << "Enter Amount [ ICICI ] : " ;
			cin >> this->amount ;
			cout << "Enter Rate Of Interest [ ICICI ] : " ;
			cin >> this->rateOfInterest ;
			this->amount = this->amount + ( ( this->amount*rateOfInterest ) / 100 ) ;
			return amount ;
		}
};

class SBI : public RBI {
	public:
		SBI(){
			cout << "Your [ Bank SBI ] Total Amount For 1 Year Is : " << getSBI() << endl << endl ;
		}
};

class BOB : public RBI {
	public:
		BOB(){
			cout << "Your [ Bank BOB ] Total Amount For 1 Year Is : " << getBOB() << endl << endl ;
		}
};

class ICICI : public RBI {
	public:
		ICICI(){
			cout << "Your [ Bank ICICI ] Total Amount For 1 Year Is : " << getICICI() << endl ;
		}
};

int main()
{
	SBI person1;
	BOB person2;
	ICICI person3;
	
	return 0;
}

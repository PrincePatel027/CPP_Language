#include<iostream>
using namespace std ;

class P{
	public:
		float temperature;
};

class Q : public P {
	public:
		void toFehrenheit()
		{
			cout << "Enter Temperature In Celcius : " ;
			cin >> temperature ;
			cout << endl ;
			float fehrenheit = (temperature * 9/5) + 32;	
			cout << "Your Fehrenheit Answer Is : " << fehrenheit << " F" << endl << endl ;
		}
};

class R : public Q {
	public:
		void toKelvin()
		{
			float kelvin = temperature + 273.15;
			cout << "Your Kelvin Answer Is : " << kelvin << " K" << endl << endl ;
		}
};

int main()
{
	R getvalue;
	
	getvalue.toFehrenheit();
	getvalue.toKelvin();
	return 0;
}

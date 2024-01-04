#include<iostream>
using namespace std;

class Sum{
	public :
		int feet,inch;
};

int main()
{
	Sum s[3];
	int i;
	
	for(i=0;i<2;i++)
	{
		cout << "Enter Feet : " ;
		cin >> s[i].feet;
		cout << "Enter Inch : " ;
		cin >> s[i].inch;
		cout << endl ;
	}
    
	s[2].inch = s[0].inch + s[1].inch ;
	s[2].feet = s[0].feet + s[1].feet + s[2].inch / 12 ;
	s[2].inch %= 12 ;
	
	cout << "Feet : " << s[2].feet << " Inch : " << s[2].inch ;
	
	return 0 ;
}

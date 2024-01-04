#include<iostream>
using namespace std;

class Distance{
	public :
		int feet,inch;
};

int main()
{
	Distance d[3];
	int i;
	
	for(i=0;i<2;i++)
	{
		cout << "No : " << i+1 << endl ;
		cout << "Enter Feet : ";
		cin >> d[i].feet ;
		cout << "Enter Inch : ";
		cin >> d[i].inch ;
		cout << endl ;
 	}
 	
 	d[2].feet  =  d[0].feet + d[1].feet ;
 	d[2].inch = d[0].inch + d[1].inch  ;
 	
 	while(d[2].inch >= 12)
 	{
 		d[2].feet ++ ;
 		d[2].inch -= 12 ;
	}
	
	cout << "-------------------------------Your Answer Is Below-------------------------------" << endl << endl ;

	cout << d[0].feet << " Feet " << d[0].inch << " Inch " << " + " ;
	cout << d[1].feet << " Feet " << d[1].inch << " Inch " << "= " << d[2].feet << " Feet " << d[2].inch << " Inch " << endl ;
	
	return 0;
}

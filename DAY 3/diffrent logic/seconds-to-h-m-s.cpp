#include<iostream>
using namespace std;

class Time{
	public :
		int hour=0,minute=0,seconds;
};

int main()
{
	Time t1;
	
	cout << "Enter Time In Seconds : " ;
	cin >> t1.seconds ;
	
	while ( t1.seconds >= 60 )
	{
		if( t1.seconds >= 60 )
		{
			t1.minute ++ ;
			t1.seconds -= 60 ;
		}
		
		if(t1.minute >= 60)
		{
			t1.hour ++ ;
			t1.minute -= 60 ;
		}	
	}
	
	cout << "Your Time Is :  " << t1.hour << " : " << t1.minute << " : " << t1.seconds << endl;
	
	return 0;
}

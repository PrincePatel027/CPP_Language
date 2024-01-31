#include<iostream>
using namespace std ;

class Operation {
	public:
		Calculate(int a, int b, int  c, int d, int e)
		{
			cout << "Your Addition Answer Is : " << a + b + c + d + e << endl ;
		}
};

class Calculator : public Operation {
	public:
		Calculate (int a, int b)
		{
			if( a!=0 && b!=0 )
			{
				cout << "Your Division Answer Is : " << a / b << endl ;
			}
		}
		
		Calculate ( int a, int b, int c )
		{
			cout << "Your Subtraction Answer Is : " << a - b - c << endl ;
		}
		
		Calculate ( int a, int b, int c, int d )
		{
			cout << "Your Multiplication Answer Is : " << a * b * c * d << endl ;
		}
};

int main()
{
	
	Calculator c1,c2,c3,c4;
	
	c1.Calculate(1,2,3,4);
	c2.Calculate(5,6,7);
	c3.Calculate(2,5);
	c4.Operation::Calculate(9,8,7,6,5);
	
	
	return 0;
}

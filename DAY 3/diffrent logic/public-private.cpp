#include<iostream>
using namespace std;

class Temp{
	public :
		string name;
};

int main()
{
	Temp a1;
	
	cout << "What Is Your Name : " ;
	cin >> a1.name ;
	
	
	cout << "Thank You Mr.. " << a1.name << endl ;
	
	return 0;
}

#include<iostream>
using namespace std;

class RoomDetails
{
	public :
		int rooms,bad,fans,doors,ac,dianing_tabel;
};


int main()
{
	int n,i;
	
	cout << "Enter How Many Details You Find : " ;
	cin >> n ;
	
	RoomDetails room[n];
	
	for(i=0;i<n;i++)
	{
		cout << "How Many Rooms In House : " ;
		cin >> room[i].rooms;
		cout << "How Many Bads In House : " ;
		cin >> room[i].bad;
		cout << "How Many AC In House : " ;
		cin >> room[i].ac;
		cout << "How Many Dianing Tables In House : " ;
		cin >> room[i].dianing_tabel ;
		cout << "How Many Doors In House : " ;
		cin >> room[i].doors ;
		cout << "How Many Fans In House : " ;
		cin >> room[i].fans ;
		cout << endl ;
	}
	
	cout << "--------------------------------------Houses Details--------------------------------------" ;
	
	for(i=0;i<n;i++)
	{
		cout << endl ;
		cout << "Rooms In House : " << room[i].rooms << endl ;
		cout << "Bads In House : " << room[i].bad << endl ;
		cout << "AC In House : " << room[i].ac << endl ;
		cout << "Dianing Tables In House : " << room[i].dianing_tabel << endl ;
		cout << "Doors In House : " << room[i].doors << endl ;
		cout << "Fans In House : " << room[i].fans << endl ;
		cout << endl ;
	}
	
	return 0;
}

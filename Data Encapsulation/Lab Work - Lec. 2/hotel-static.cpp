#include<iostream>
using namespace std;

class Hotels{
	private :
		int id,rating,staff_quntity,room_quantity ;
		string name,type,establised_year;
		static string location ;
		
	public :
		getValue(){
			cout << "Enter Id : " ;
			cin >> id ;
			cout << "Enter Rating : " ;
			cin >> rating ;
			cout << "Enter staff Quntity : " ;
			cin >> staff_quntity ;
			cout << "Enter Room Quantity : " ;
			cin >> room_quantity ;
			cout << "Enter Name : " ;
			cin >> name ;
			cout << "Enter Hotel Type : " ;
			cin >> type ;
			cout << "Enter Establised Year : " ;
			cin >> establised_year ;
			cout << endl ;
		}
		printValue(){
			cout << "Id\t : " << id << endl ;
			cout << "Name\t : " << name << endl ;
			cout << "Type\t : " << type << endl ;
			cout << "Rating\t : " << rating << endl ;
			cout << "Establised Year\t : " << establised_year << endl ;
			cout << "Staff Quntity\t : " << staff_quntity << endl ;
			cout << "Room Quantity\t : " << room_quantity << endl ;
		}
		locationStatic(){
			cout << "Location Is : " << location << endl << endl;
		}
};

string Hotels::location = "Rajkot" ;

int main()
{
	int i,n;
	
	cout << "Enter N Numbers Of Hotels : " ;
	cin >> n ;
	
	Hotels noHotals[n];
	
	for(i=0;i<n;i++)
	{
		noHotals[i].getValue();
	}
	
	for(i=0;i<n;i++)
	{
		noHotals[i].printValue();
		noHotals[i].locationStatic();
	}
	
	return 0;
}

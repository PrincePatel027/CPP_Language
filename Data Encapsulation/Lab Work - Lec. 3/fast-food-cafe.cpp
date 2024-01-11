//cafe_id
//- cafe_name
//- cafe_type (like rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity

#include<iostream>
using namespace std;

class Fast_Food_cafe{
	private:
		int id,rating,establish_year,staff_quantity;
		string name,type;
		static string location ;
		
	public:
		Fast_Food_cafe()
		{
			cout << "Enter Id : ";
			cin >> id ;
			cout << "Enter Name : ";
			cin >> name ;
			cout << "Enter Type (rooftop or normal) : ";
			cin >> type ;
			cout << "Enter Rating : ";
			cin >> rating ;
			cout << "Enter Establish Year : ";
			cin >> establish_year ;
			cout << "Enter Staff Quantity : ";
			cin >> staff_quantity ;
			cout << endl ;
		}
		getData()
		{
			cout << "Id Is : " << this-> id << endl ;
			cout << "Cafe Name Is : " << this-> name << endl ;
			cout << "type Is : " << this-> type << endl ;
			cout << "rating Is : " << this-> rating << endl ;
			cout << "Establish Year Is : " << this-> establish_year << endl ;
			cout << "Staff Quantity Is : " << this-> staff_quantity << endl ;
		}
		getStatic(){
			cout << "Location Is : " << location << endl << endl ;
		}
};

string Fast_Food_cafe::location = "Rajkot" ;

int main(){
	
	int i,n;
	
	cout << "Enter Number of cafe : " ;
	cin >> n ;
	
	Fast_Food_cafe cafe[n];
	
	for(i=0;i<n;i++)
	{
		cafe[i].getData();
		cafe[i].getStatic();
	}
	
	return 0;
}
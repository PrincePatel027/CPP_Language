#include<iostream>
using namespace std;

class Diamond{
	private:
		int id,staff_quantity,revenue,import_raw_diamonds,export_diamonds;
		string name,ceo;
	
	public:
		Diamond(string name,string ceo,int id,int staff_quantity, int revenue, int import_raw_diamonds, int export_diamonds)
		{
			this->id = id ;
			this->staff_quantity = staff_quantity ;
			this->revenue = revenue ;
			this->import_raw_diamonds = import_raw_diamonds ;
			this->export_diamonds = export_diamonds ;
			this->name = name ;
			this->ceo = ceo ;
		}
		getData()
		{
			cout << "Company Name Is : " << this->name << endl ;
			cout << "CEO Is : " << this->ceo << endl ;
			cout << "Id Is : " << this->id << endl ;
			cout << "Staff Quantity Is : " << this->staff_quantity << endl ;
			cout << "Revenue Is : " << this->revenue << endl ;
			cout << "Import Raw Diamonds Is : " << this->import_raw_diamonds << endl ;
			cout << "Export Diamonds Is : " << this->export_diamonds << endl << endl ;
		}
};

int main()
{
	
	Diamond cmp1("Prince-private-limited","Prince",1,500,10000,5000,4500);
	Diamond cmp2("Andhra-diamonds","Badshaah",2,100,30000,200,234);
	Diamond cmp3("gauseva-limited","Raj",3,45,400000,1500,1200);
	Diamond cmp4("krushnam-diamonds","Gaurav",4,54,30000,400,350);
	Diamond cmp5("Logion-df","Bholu",5,20,40000,550,450);
	
	cmp1.getData();
	cmp2.getData();
	cmp3.getData();
	cmp4.getData();
	cmp5.getData();
	
	
	return 0;
}
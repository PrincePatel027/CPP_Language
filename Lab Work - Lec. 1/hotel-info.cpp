#include<iostream>
using namespace std; 

class Hotel{
    private: 
        int id;
        string name;
        static string hotel_type;
        int hotel_rating;
        static string location;
        int hotel_strting_year;
        int staff_Num;
        int room_Num;
        
    public:
        setData()
        {
                cout << "Enter hotel id : " ;
                cin >> this->id ;
                cout << "Enter Hotel Name : " ; 
                cin >> this->name ; 
                cout << "Enter Hotel Rrating : " ;  
                cin >> this->hotel_rating ; 
                cout << "Enter hotel starting year : " ;  
                cin >> this->hotel_strting_year ;
                cout << "Enter Staff Number : " ; 
                cin >> this->staff_Num ; 
                cout << "Enter Room Number : " ;
                cin >> this->room_Num ;
                cout << endl;  
        }

        getData()
        {
            cout << "Hotel Id : " << this->id << endl ;
            cout << "Hotel Name : " << this->name << endl ;
            cout << "Hotel rating : " << this->hotel_rating << endl ;
            cout << "Hotel Starting Year : " << this->hotel_strting_year << endl ;
            cout << "Hotel Staff Number : " << this->staff_Num << endl ;
            cout << "Hotel Room Number : " << this->room_Num << endl ;
        }

        static getStatic(){
            cout << "Hotel Type Is : " << hotel_type << endl ;
            cout << "Hotel Location Is : " << location << endl << endl;
        }

};

string Hotel::hotel_type = "Hotel" ;
string Hotel::location = "Rajkot" ;

int main(){

    int i,n;

    cout << "Enter Hotel Numbers : " ;
    cin >> n;


    Hotel hotel[n];

    for(i=0; i<n;i++)
    {   
        hotel[i].setData();
    }

    for(i=0; i<n;i++)
    {   
        hotel[i].getData();
        hotel[i].getStatic();
    }

    return 0;
}

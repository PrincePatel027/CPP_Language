#include<iostream>
using namespace std; 

class Info{
    private: 
        int id;
        string name; 
        int age;
        string telecome_brand;
        string mobile_number ;
        string city;
        string validity ;

    public:
        setData(){
            cout << "Enter Id : " ;
            cin >> this->id ;
            cout << "Enter Name : " ;
            cin >> this->name ; 
            cout << "Enter Age : " ;
            cin >> this->age ;
            cout << "Enter Telecome-brand : " ;
            cin >> this->telecome_brand ; 
            cout << "Enter City : " ;
            cin >> this->city ; 
            cout << "Enter validity : " ;
            cin >> this->validity ;
            cout << "Enter Mobile Number : " ;
            cin >> this->mobile_number;
            cout << endl;
        }
        getData(){
            cout << "Id : " << this->id << endl ;
            cout << "Name : " << this->name << endl ;
            cout << "Age : " << this->age << endl ;
            cout << "Telecome-brand : " << this->telecome_brand << endl ;
            cout << "City : " << this->city << endl ;
            cout << "validity : " << this->validity << endl ;
            cout << "Mobile Number : " << this->mobile_number << endl ;
            cout << endl ;
        }

};


int main(){
    int i ;

    Info custmr[5];

    for(i=0;i<5;i++){
        custmr[i].setData();
    }

    for(i=0;i<5;i++){
        custmr[i].getData();
    }

    return 0; 
}

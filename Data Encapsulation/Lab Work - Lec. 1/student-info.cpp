#include<iostream>
using namespace std;

class Student_Info{
	private :
		int id ,age;
		char name ,course ,email ,city,collage;
		
	public :
		getValue(){
			cout << "Enter Id : " ;
			cin >> this->id ;
			cout << "Enter Age : " ;
			cin >> this->age ;
			cout << "Enter Name : " ;
			cin >> this->name ;
			cout << "Enter Course : " ;
			cin >> this->course ;
			cout << "Enter E-mail : " ;
			cin >> this->email ;
			cout << "Enter City : " ;
			cin >> this->city ;
			cout << "Enter Collage : " ;
			cin >> this->collage ;
			cout << endl ;
		}
		printValue()
		{
			cout << "Id\t : " << this->id << endl ;
			cout << "Age\t : " << this->age << endl ;
			cout << "Name\t : " << this->name << endl ;
			cout << "Course\t : " << this->course << endl ;
			cout << "E-mail\t : " << this->email << endl ;
			cout << "City\t : " << this->city << endl ;
			cout << "Collage\t : " << this->collage << endl << endl ;
		}
};

int main(){
		
	int i;
	Student_Info std[5];
	
	for(i=0;i<5;i++)
	{
		std[i].getValue();
	}
	
	for(i=0;i<5;i++)
	{
		std[i].printValue();
	}
	
	return 0;
}

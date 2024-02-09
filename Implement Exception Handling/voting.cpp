#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your Age : " ;
    cin >> age;

    try{
        if(age >= 18)
        {
            throw 1 ;
        }
        cout << "You can't Vote........." << endl;
    }
    catch(int a)
    {
        cout << "You Can Vote Thankyou.........." << endl;
    }
    catch(...)
    {
        cout << "Error......" << endl;
    }

    return 0;
}
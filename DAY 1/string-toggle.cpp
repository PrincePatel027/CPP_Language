#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int i,len;

    cout << "Enter Your Name : " ;
    cin >> name ;
	len = strlen(name);

    for(i=0;i<len;i++)
    {
        if(name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32 ;
        }

        else if(name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32 ;
        }
    }

    cout << "Your Toggle Case Name Is : " << name <<endl;
}
#include<iostream>
using namespace std;

int main()
{

    char name[100];
    int i;

    cout<<"Enter the string: ";
    cin>>name;

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            name[i]=name[i]-32;
        }
        else if(name[i]>='A' && name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
    }

    cout<< "---------------------------Your Toggle Case Answer Here --------------------------------" << endl;

    cout << name << endl; 

    return 0;
}
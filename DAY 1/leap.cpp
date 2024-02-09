// WAP to find all leap years from 2020 to 3030 and store them into an array.

#include<iostream>
using namespace std;

int main()
{
    int i,j=0,array[500];

    for(i=2020;i<=3030;i++)
    {
        if(i%4==0)
        {
            array[j] = i ;
            j++;
        }
    }

    cout << "--------------------------Your leap year Array is Below --------------------------------" << endl;

    for(i=0;i<j;i++)
    {
        cout << "array[" << i << "] : " << array[i] << endl; 
    }

    return 0;
}
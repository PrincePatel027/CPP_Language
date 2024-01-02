#include<iostream>
using namespace std;
int main()
{
    int i,a[500],temp=0;

    for(i=2020;i<3030;i++)
    {
        if(i%4==0)
        {
            a[temp] = i ;
            temp++;
        }
    }

    for(i=0;i<temp;i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }  

    return 0 ;
}
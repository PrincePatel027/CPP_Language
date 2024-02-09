// WAP to find factorial of all elements from given array

#include<iostream>
using namespace std; 

int main()
{
    int i,j,n,fac;

    cout<<"Enter the Array Size : ";
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cout << "arr[" << i << "] = " ;
        cin>>arr[i];n>>arr[i];
    }
    
    cout << "=======================Your Factorial Numbr Of All Elements Are Below =============================" << endl;

    for(i=0;i<n;i++)
    {
        fac=1;
        for(j=1;j<=arr[i];j++)
        {
            fac *= j ;
        }
        cout << "Your Factorial Of a[" << i << "] Is : " << fac << endl;
    }

    return 0;
}

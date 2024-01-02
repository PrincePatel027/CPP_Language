#include<iostream>
using namespace std;
int main(){

    int n;

    cout << "Enter Array Size : " ;
    cin >> n ;

    int a[n],fac,i,j,temp;

    for(i=0;i<n;i++)
    {
        cout << "a[" << i << "] = " ;
        cin >> a[i] ;
    }

    for(i=0;i<n;i++)
    {
        temp = a[i];
        
        fac = 1;
        
        for(j=temp;j>=1;j--)
        {
        	fac *= j ;
		}
    	cout << "Your Factorial Of a[" << i << "] Is : " << fac << endl;
    }


    return 0;
}
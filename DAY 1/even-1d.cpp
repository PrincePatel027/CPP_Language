#include<iostream>
using namespace std;

int main()
{

    int n,i;

    cout<<"Enter the size of the array : ";
    cin>>n;

    int a[n];

    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
    {   
        cout<< "a[" << i << "] = ";
        cin>>a[i];
    }

    cout << "---------------Your Answer Is Here --------------------" << endl;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout << a[i] << " ";
        }
    }


    return 0;
}
#include <iostream>
using namespace std;

int main() 
{
    int n, i;
    cout << "Enter Array Size: ";
    cin >> n;
    int a[n];

    for (i=0; i<n; i++) 
	{
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Your Even Elements From Array Are: ";

    for (i=0; i<n; i++) 
	{
        if (a[i] % 2 == 0) 
		{
            cout << a[i] << " ";
        }
    }

    return 0;
}

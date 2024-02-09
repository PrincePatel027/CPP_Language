#include<iostream>
#include<string>
using namespace std;

int main()
{
    string pass;
	int upperCase;

    cout << "Enter password : ";
    cin >> pass;

    try{
        for(int i = 0; i < pass.length(); i++)
        {
            if(isupper(pass[i]))
            {
                upperCase = true;
                break;
            }
        }

        if(upperCase)
        {
            throw 27;
        }
        else
        {
            throw 'a';
        }
    }
    catch(int a)
    {
        cout << "Your Password Has Capital Letter." << endl;
    }
    catch(char a)
    {
        cout << "Your Password Does Not Contain Any Capital Letters." << endl;
    }
    catch(...)
    {
        cout << "Error...." << endl ;
    }

    return 0;
}

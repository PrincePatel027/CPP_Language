#include<iostream>
using namespace std;

int main()
{
    int a,b,op;

    cout << "Press 1 For + \npress 2 For - \npress 3 For X \npress 4 For / \npress 5 For % \npress 0 for Exit" << endl;

    while (1)
    {

        cout << "Enter Your Choice : " ;
        cin >> op;

        if(op == 0)
        {
            cout << "Exiting the program" << endl;
            break;
        }
        else
        {
            switch(op)
            {
                case 1:
                    cout << "Enter the first number : " ;
                    cin >> a;
                    cout << "Enter the second number : " ;
                    cin >> b;
                    cout << a << " + " << b << " = " << a + b << endl;
                    cout << endl;
                    break;
                case 2:
                    cout << "Enter the first number : " ;
                    cin >> a;
                    cout << "Enter the second number : " ;
                    cin >> b;
                    cout << a << " - " << b << " = " << a - b << endl;
                    cout << endl ;
                    break;
                case 3:
                    cout << "Enter the first number : " ;
                    cin >> a;
                    cout << "Enter the second number : " ;
                    cin >> b;
                    cout << a << " X " << b << " = " << a * b << endl;
                    cout << endl ;
                    break;
                case 4:
                    cout << "Enter the first number : " ;
                    cin >> a;
                    cout << "Enter the second number : " ;
                    cin >> b;
                    cout << a << " / " << b << " = " << a / b << endl;
                    cout << endl ;
                    break;
                case 5:
                    cout << "Enter the first number : " ;
                    cin >> a;
                    cout << "Enter the second number : " ;
                    cin >> b;
                    cout << a << " % " << b << " = " << a % b << endl;
                    cout << endl ;
                    break;
                default:
                    cout << "Enter Valid Choice" << endl;
            }
        }
    }
    


    return 0;
}

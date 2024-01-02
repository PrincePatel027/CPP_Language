#include<iostream>
using namespace std;

int main() {
    int a,b,op,temp=1;

    while (temp == 1) {
        cout << "Press 1 For Addition (+)\nPress 2 For Subtraction (-)\nPress 3 For Multiplication ( X )\nPress 4 For Division ( / )\nPress 5 For Modulo ( % )\nPress 0 For Exit The Program\nEnter Your Choice: ";
        cin >> op;
		cout << endl;
		
        if (op == 0) {
            cout << "Exiting The Program. Thank You :)" << endl;
            break;
        }

        cout << "Enter The Value Of A: ";
        cin >> a;
        cout << "Enter The Value Of B: ";
        cin >> b;

        switch (op) {
            case 1:
                cout << "Addition Of " << a << " And " << b << " Is " << a + b << endl;
                break;

            case 2:
                cout << "Subtraction Of " << a << " And " << b << " Is " << a - b << endl;
                break;

            case 3:
                cout << "Multiplication Of " << a << " And " << b << " Is " << a * b << endl;
                break;

            case 4:
                    cout << "Division Of " << a << " And " << b << " Is " << a / b << endl;
                break;

            case 5:
                    cout << "Modulo Of " << a << " And " << b << " Is " << a % b << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
        cout << endl;
    }

    return 0;
}

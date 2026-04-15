#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{

    double x, y, result;
    char op;
    bool j = true;

    while (j)
    {
        system("cls");

        cout << "Areas Calculator 📐📏" << endl;
        cout << "Option A: Area of Rectangle" << endl;
        cout << "Option B: Area of Triangle" << endl;
        cout << "Option C: Area of Square" << endl;
        cout << "Option D: Area of Circle" << endl;

        cout << "Enter the calculator type (Q to quit): " << endl;
        cin >> op;

        switch (op)
        {
        case 'A':
        case 'a':
            cout << "Enter the length: ";
            cin >> x;
            cout << "\nEnter the width: ";
            cin >> y;
            if (x <= 0 || y <= 0){
                cout << "Error Occoured: you entered a negative number" << endl;
                break;
            }
            else {
                result = x * y;
                cout << "\nResult is " << result << endl;
                break;
            }
        case 'B':
        case 'b':
            cout << "Enter the base: " << endl;
            cin >> x;
            cout << "Enter the height: " << endl;
            cin >> y;
            if (x <= 0 || y <= 0)
            {
                cout << "Error Occoured: you entered a negative number" << endl;
                break;
            }
            else {
                result = 0.5 * (x * y);
                cout << "Area is " << result << endl;
                break;
            }
        case 'C':
        case 'c':
            cout << "Enter the length/width: " << endl;
            cin >> x;
            if (x <= 0)
            {
                cout << "Error Occoured: you entered a negative number" << endl;
                break;
            }
            else {
                result = pow(x, 2);
                cout << "Area is " << result << endl;
                break;
            }
        case 'D':
        case 'd':
            cout << "Enter the radius: " << endl;
            cin >> x;
            if (x <= 0)
            {
                cout << "Error Occoured: you entered a negative number" << endl;
                break;
            }
            else
            {
                result = 3.14 * (pow(x, 2));
                cout << "Area is " << result << endl;
                break;
            }
        case 'Q':
        case 'q':
            cout << "System Shut Down Pending..." << endl;
            j = false;
            break;
        default:
            cout << "Invalid input! Please try again." << endl;
            break;
        }
        if (j)
        {
            cout << "\n-----------------------------" << endl;
            system("pause");
            system("cls");
        }
    }

    return 0;
}
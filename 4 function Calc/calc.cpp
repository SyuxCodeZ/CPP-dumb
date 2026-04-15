#include <iostream>
using namespace std;
float sum(float a, float b) {return a + b;}
float sub(float a, float b) {return a - b;}
float mul(float a, float b) {return a * b;}
float div(float a, float b) {
    if (b != 0) {return a / b;}
    else {cout << "Error Occurred"; return 0;}
}

int main()
{   
    float x, y;
    char op;
    float result;

    while(true){

    //user inputs

        cout << "Enter your 1st number: ";
        cin >> x;
        cout << "Enter the operator (A for +, B for -, C for * and D for / and Q to quit): ";
        cin >> op;
        if (op == 'q' || op == 'Q') {
            return 0;}
        cout << "Enter your 2nd number: ";
        cin >> y;

        //switches

        switch (op) {
            case 'A':
            case 'a': result = sum(x, y); cout << "result is: " << result << endl;
                break;
            case 'B':
            case 'b': result = sub(x, y); cout << "result is: " << result << endl;
                break;
            case 'C':
            case 'c': result = mul(x, y); cout << "result is: " << result << endl;
                break;
            case 'D':
            case 'd': result = div(x, y); cout << "result is" << result << endl;
                break;}              
    } return 0;
}
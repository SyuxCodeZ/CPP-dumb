#include <iostream>
#include <cstdlib>

int main() {

    while(true) {
        system ("cls");
        double x, y;
        int op;
        std::cout << "#1 Addition" << std::endl;
        std::cout << "#2 Subtraction" << std::endl;
        std::cout << "#3 Multiplication" << std::endl;
        std::cout << "#4 Division" << std::endl;
        std::cout << "#5 Quit" << std::endl;

        std::cout << "Enter your operator: ";
        std::cin >> op;
        std::cout << "Enter the first number: ";
        std::cin >> x;
        std::cout << "Enter the second number: ";
        std::cin >> y;

        switch (op) {
            case 1: {
                double result = x + y;
                std::cout << "result is " << result << std::endl;
                break;}
            case 2: {
                double result = x - y;
                std::cout << "result is " << result << std::endl;
                break;}
            case 3: {
                double result = x * y;
                std::cout << "result is " << result << std::endl;
                break;}
            case 4: {
                if (y != 0) {
                    double result = x / y;
                    std::cout << "result is " << result << std::endl;
                }
                else {
                    std::cout << "Error occoured" << std::endl;
                }
                break;}
            case 5: {
                std::cout << "Exiting program..." << std::endl;
                return 0;}
            default: {
                std::cout << "Error occoured" << std::endl;
                break;}
            }
    }
    return 0;
}
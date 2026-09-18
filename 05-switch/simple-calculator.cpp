#include <iostream>

int main()
{
    double a = 0.0;
    double b = 0.0;
    char operation = '?';

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> b;

    switch (operation)
    {
        case '+':
            std::cout << "Result: " << a + b << std::endl;
            break;

        case '-':
            std::cout << "Result: " << a - b << std::endl;
            break;

        case '*':
            std::cout << "Result: " << a * b << std::endl;
            break;

        case '/':
            std::cout << "Result: " << a / b << std::endl;
            break;

        default:
            std::cout << "Invalid operation" << std::endl;
    }

    return 0;
}
#include <iostream>

int main()
{
    int number = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number)
    {
        std::cout << "Condition is true (non-zero)" << std::endl;
    }
    else
    {
        std::cout << "Condition is false (zero)" << std::endl;
    }

    return 0;
}
#include <iostream>

int main()
{
    int number = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "Positive" << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "Negative" << std::endl;
    }
    else
    {
        std::cout << "Zero" << std::endl;
    }

    return 0;
}
#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    std::cout << "Enter two integers a and b: ";
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << "a is greater" << std::endl;
    }
    else if (a < b)
    {
        std::cout << "a is smaller" << std::endl;
    }
    else
    {
        std::cout << "a and b are equal" << std::endl;
    }

    return 0;
}
#include <iostream>

int main()
{
    int age = 0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 13)
    {
        std::cout << "Child" << std::endl;
    }
    else if (age >= 13 && age <= 19)
    {
        std::cout << "Teenager" << std::endl;
    }
    else if (age >= 20 && age <= 64)
    {
        std::cout << "Adult" << std::endl;
    }
    else
    {
        std::cout << "Senior" << std::endl;
    }

    return 0;
}
#include <iostream>

int main()
{
    char name[20];

    std::cout << "Enter your first name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    char fullName[100];

    std::cout << "Enter your full name: ";
    std::cin.getline(fullName, 100);

    std::cout << "Nice to meet you, " << fullName << "!" << std::endl;

    return 0;
}
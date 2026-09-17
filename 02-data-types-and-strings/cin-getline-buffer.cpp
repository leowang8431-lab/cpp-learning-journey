#include <iostream>
#include <string>

int main()
{
    int age = 0;
    std::string fullName;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cin.ignore();

    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Age: " << age
              << ", Name: " << fullName << std::endl;

    return 0;
}
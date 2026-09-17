#include <iostream>
#include <string>

int main()
{
    int age = 0;
    std::string fullName;
    std::string studentId;
    double gpa = 0.0;
    char grade = '?';

    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Full name: ";
    std::getline(std::cin, fullName);

    std::cout << "Student ID: ";
    std::cin >> studentId;

    std::cout << "GPA: ";
    std::cin >> gpa;

    std::cout << "Grade letter: ";
    std::cin >> grade;

    std::cout << "\n--- Student Card ---" << std::endl;
    std::cout << "Name: " << fullName << std::endl;
    std::cout << "ID: " << studentId << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
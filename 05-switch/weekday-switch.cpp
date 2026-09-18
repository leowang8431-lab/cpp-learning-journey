#include <iostream>

int main()
{
    int day = 0;

    std::cout << "Enter a day number (1-3): ";
    std::cin >> day;

    switch (day)
    {
        case 1:
            std::cout << "Monday" << std::endl;
            break;

        case 2:
            std::cout << "Tuesday" << std::endl;
            break;

        case 3:
            std::cout << "Wednesday" << std::endl;
            break;

        default:
            std::cout << "Invalid day" << std::endl;
    }

    return 0;
}
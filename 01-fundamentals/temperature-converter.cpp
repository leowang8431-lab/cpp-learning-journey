#include <iostream>

int main()
{
    double celsius = 0.0;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
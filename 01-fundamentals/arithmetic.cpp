#include <iostream>

int main()
{
    int a = 0;
    int b = 0;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
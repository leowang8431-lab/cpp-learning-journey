#include <iostream>

int main()
{
    char letter = '?';

    std::cout << "Type one letter: ";
    std::cin >> letter;

    std::cout << "Letter: " << letter << std::endl;
    std::cout << "ASCII code: " << int(letter) << std::endl;

    return 0;
}
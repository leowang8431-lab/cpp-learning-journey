#include <iostream>
#include <cstring>
#include <string>

int main()
{
    // Part A: C-string
    char raw[50] = "Hello";
    std::strcat(raw, " World");

    std::cout << "C-string: " << raw
              << " length=" << std::strlen(raw) << std::endl;

    // Part B: std::string
    std::string modern = "Hello";
    modern += " World";

    std::cout << "std::string: " << modern
              << " length=" << modern.length() << std::endl;

    return 0;
}
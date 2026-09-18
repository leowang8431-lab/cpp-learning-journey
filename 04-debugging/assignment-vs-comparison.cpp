#include <iostream>

int main()
{
    int score = 0;

    std::cout << "Enter score: ";
    std::cin >> score;

    // Perfect score
    if (score == 100)
    {
        std::cout << "Perfect" << std::endl;
    }
    // Passing score
    else if (score >= 60)
    {
        std::cout << "Pass" << std::endl;
    }
    // Failing score
    else
    {
        std::cout << "Fail" << std::endl;
    }

    return 0;
}
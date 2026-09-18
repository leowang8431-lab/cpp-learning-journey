#include <iostream>
#include <string>

int main()
{
    double weight = 0.0;
    int speed = 0;
    char island = 'n';

    double cost = 0.0;
    double costPerKg = 0.0;
    std::string speedName;

    // Read parcel weight
    std::cout << "Enter parcel weight (kg): ";
    std::cin >> weight;

    // Choose shipping speed
    std::cout << "Choose shipping speed:" << std::endl;
    std::cout << "1 = Standard" << std::endl;
    std::cout << "2 = Express" << std::endl;
    std::cout << "3 = Overnight" << std::endl;
    std::cout << "Enter choice: ";
    std::cin >> speed;

    // Ask whether the destination is an island
    std::cout << "Is the destination an island? (y/n): ";
    std::cin >> island;

    // Calculate base cost by weight
    if (weight <= 2)
    {
        cost = 5;
    }
    else if (weight <= 5)
    {
        cost = 10;
    }
    else if (weight <= 10)
    {
        cost = 18;
    }
    else
    {
        cost = 30;
    }

    // Apply shipping speed multiplier
    switch (speed)
    {
        case 1:
            speedName = "Standard";
            cost = cost * 1.0;
            break;

        case 2:
            speedName = "Express";
            cost = cost * 1.5;
            break;

        case 3:
            speedName = "Overnight";
            cost = cost * 2.0;
            break;

        default:
            speedName = "Invalid";
            break;
    }

    // Add island surcharge
    if (island == 'y')
    {
        cost = cost + 5;
    }

    // Calculate cost per kilogram
    costPerKg = cost / weight;

    // Print shipping receipt
    std::cout << "========================================" << std::endl;
    std::cout << "    BiUH Logistics - ParcelCost" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
    std::cout << "Speed: " << speedName << std::endl;

    if (island == 'y')
    {
        std::cout << "Island: yes" << std::endl;
    }
    else
    {
        std::cout << "Island: no" << std::endl;
    }

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Total cost: " << cost << " CNY" << std::endl;
    std::cout << "Cost per kg: " << costPerKg << " CNY/kg" << std::endl;
    std::cout << "========================================" << std::endl;

    return 0;
}
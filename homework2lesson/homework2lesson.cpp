// homework2lesson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //Task 1
    double R0, R1, R2, R3;
    std::cout << "Task 1 \n";
    std::cout << "Enter R1: \n";
    std::cin >> R1; 
    std::cout << "Enter R2: \n";
    std::cin >> R2; 
    std::cout << "Enter R3: \n";
    std::cin >> R3;
    R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
    std::cout << "R0: " << R0 << std::endl;

    //Task 2
    std::cout << "Task 2\n";
    const double pi = 3.14159265359;
    double length,radius, S;
    std::cout << "Enter length of the circle: ";
    std::cin >> length;
    // radius
    radius = (length / pi) / 2;
    //square
    std::cout << "Square of cirlce: " << radius * radius * pi << std::endl;

    //Task 3
    std::cout << "Task 3 \n";
    double v, t, a;
    std::cout << "Speed: ";
    std::cin >> v;
    std::cout << "Time: ";
    std::cin >> t; 
    std::cout << "Acceleration: ";
    std::cin >> a;
    std::cout << "Traveled distance: " << v * t + (a * t * t) / 2 << std::endl;

    return 0;
}

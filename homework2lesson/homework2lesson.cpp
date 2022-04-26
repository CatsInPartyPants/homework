// homework2lesson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //Задание 1
    double R0, R1, R2, R3;
    std::cout << "Enter R1: \n";
    std::cin >> R1; 
    std::cout << "Enter R2: \n";
    std::cin >> R2; 
    std::cout << "Enter R3: \n";
    std::cin >> R3;
    R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
    std::cout << "Значение сопротивления R0 равняется: " << R0 << std::endl;

    //Задание 2
    const double pi = 3.14159265359;
    double length,radius, S;
    std::cout << "Введите длину окружности: ";
    std::cin >> length;
    // Находим радиус
    radius = (length / pi) / 2;
    //Находим и выводим площадь круга
    std::cout << "Площадь круга равна: " << radius * radius * pi << std::endl;

    //Задание 3
    double v, t, a;
    std::cout << "Введите скорость: ";
    std::cin >> v;
    std::cout << "Введите время движения: ";
    std::cin >> t; 
    std::cout << "Введите ускорение: ";
    std::cin >> a;
    std::cout << "Пройденное расстояние при прямолинейном равноускоренном движении: " << v * t + (a * t * t) / 2 << std::endl;

    return 0;
}

// homework2lesson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //������� 1
    double R0, R1, R2, R3;
    std::cout << "Enter R1: \n";
    std::cin >> R1; 
    std::cout << "Enter R2: \n";
    std::cin >> R2; 
    std::cout << "Enter R3: \n";
    std::cin >> R3;
    R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
    std::cout << "�������� ������������� R0 ���������: " << R0 << std::endl;

    //������� 2
    const double pi = 3.14159265359;
    double length,radius, S;
    std::cout << "������� ����� ����������: ";
    std::cin >> length;
    // ������� ������
    radius = (length / pi) / 2;
    //������� � ������� ������� �����
    std::cout << "������� ����� �����: " << radius * radius * pi << std::endl;

    //������� 3
    double v, t, a;
    std::cout << "������� ��������: ";
    std::cin >> v;
    std::cout << "������� ����� ��������: ";
    std::cin >> t; 
    std::cout << "������� ���������: ";
    std::cin >> a;
    std::cout << "���������� ���������� ��� ������������� ��������������� ��������: " << v * t + (a * t * t) / 2 << std::endl;

    return 0;
}

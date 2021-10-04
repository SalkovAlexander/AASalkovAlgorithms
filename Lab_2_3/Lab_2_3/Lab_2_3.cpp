#include <iostream>
#include <cmath>
#include <Windows.h>

int one()
{
    double a, b, c, x1, x2;

    std::cout << "���������� ��������� ax^2 + bx - c = 0\n������� �������� ���������� b � c\n";
    std::cin >> b >> c;

    x1 = (-b - sqrt(b * b + 4 * c)) / 2;
    x2 = (-b + sqrt(b * b + 4 * c)) / 2;

    std::cout << "������ ������ x1 = " << x1 << " ������ ������ x2 = " << x2 << "\n\n";

    return 0;
}

int two()
{
    double b, c, d, x1, x2;

    std::cout << "���������� ��������� x^2 + bx - c/d = 0\n������� �������� ���������� b, c � d\n";
    std::cin >> b >> c >> d;

    if (d == 0)
    {
        std::cout << "d �� ����� ��������� ����";

        return 0;
    }
    else
    {
        x1 = (-b - sqrt(b * b + 4 * c/d)) / 2;
        x2 = (-b + sqrt(b * b + 4 * c/d)) / 2;

        std::cout << "������ ������ x1 = " << x1 << " ������ ������ x2 = " << x2 << "\n\n";
    }

    return 0;
}

int three()
{
    double a, b;

    std::cout << "���������� ��������� y = cos(a*b)/a\n������� �������� ��������� a\n";
    std::cin >> a;

    if (a == 0)
    {
        std::cout << "�������� a �� ����� ��������� ����\n";
        return 0;
    }
    else
    {
        for (b = 1; b < 15; b++)
        {
            std::cout << cos(a * b) / a << "\n";
        }
    }

    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //one();
    //two();
    three();

    return 0;
}
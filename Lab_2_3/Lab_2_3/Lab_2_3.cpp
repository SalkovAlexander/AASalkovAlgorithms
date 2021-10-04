#include <iostream>
#include <cmath>
#include <Windows.h>

int one()
{
    double a, b, c, x1, x2;

    std::cout << "Вычисление выражения ax^2 + bx - c = 0\nВведите значения параметров b и c\n";
    std::cin >> b >> c;

    x1 = (-b - sqrt(b * b + 4 * c)) / 2;
    x2 = (-b + sqrt(b * b + 4 * c)) / 2;

    std::cout << "Первый корень x1 = " << x1 << " Второй корень x2 = " << x2 << "\n\n";

    return 0;
}

int two()
{
    double b, c, d, x1, x2;

    std::cout << "Вычисление выражения x^2 + bx - c/d = 0\nВведите значения параметров b, c и d\n";
    std::cin >> b >> c >> d;

    if (d == 0)
    {
        std::cout << "d не может равняться нулю";

        return 0;
    }
    else
    {
        x1 = (-b - sqrt(b * b + 4 * c/d)) / 2;
        x2 = (-b + sqrt(b * b + 4 * c/d)) / 2;

        std::cout << "Первый корень x1 = " << x1 << " Второй корень x2 = " << x2 << "\n\n";
    }

    return 0;
}

int three()
{
    double a, b;

    std::cout << "Вычисление выражения y = cos(a*b)/a\nВведите значения параметра a\n";
    std::cin >> a;

    if (a == 0)
    {
        std::cout << "Параметр a не может равняться нулю\n";
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
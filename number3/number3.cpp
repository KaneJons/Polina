#include <iostream>

using namespace std;

char WhatIsSymbol(int a, int b) //Определение конкретного символа 
{
    if (a > b)
    {
        return '>';
    }
    else if (a < b)
    {
        return '<';
    }
    else
    {
        return '=';
    }
}

int MinimalInt(int a, int b) // Поиск минимального числа
{
    return (a < b) ? a : b;
}

int MinimalInt(int a, int b, int c)  // Перегрузка
{
    int minNumber = a; 

    if (b < minNumber) {
        minNumber = b; 
    }

    if (c < minNumber) {
        minNumber = c; 
    }
    return minNumber;
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0; 

    cout << "Введите первое целое число: "; //Первое задание
    cin >> num1;

    cout << "Введите второе целое число: ";
    cin >> num2;

    char result = WhatIsSymbol(num1, num2);

    std::cout << "Результат: " << num1 << " " << result << " " << num2 << std::endl;

    std::cout << "Введите первое целое число: "; // Второе задание
    std::cin >> num1;

    std::cout << "Введите второе целое число: ";
    std::cin >> num2;

    std::cout << "Введите третье целое число: ";
    std::cin >> num3;

    int minOfTwo = MinimalInt(num1, num2);
    int minOfThree = MinimalInt(num1, num2, num3);

    std::cout << "Минимальное среди двух чисел " << num1 << " и " << num2 << "  - это " << minOfTwo << std::endl;
    std::cout << "Минимальное среди  трех чисел " << num1 << ", " << num2 << ", и " << num3 << " - это " << minOfThree << std::endl;

    return 0;
}


#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cout << "Введите x:"; // Вывод текста
	cin >> x; //Ввод числа x
	cout << "Введите y:"; // Вывод текста
	cin >> y; // Ввод числа y

	double s = 0, xSharEy = 0;
	xSharEy = x / y;

	if (0 > xSharEy) 
	{
		s = pow((pow(x,2)+y), 3); //возведения в степень в x^2 и все что в скобках в степень 3
	}
	else if (0 < xSharEy)
	{
		s = log(abs(xSharEy)) + xSharEy; //log - натуральный логарифм ln, abs - модуль
	}
	else
	{
		s = cbrt(abs(sin(y))); // cbrt -  кубический корень, sin - синус
	}

	cout << "Ответ: s = " << s << endl; //Вывод строки и значения переменой
}

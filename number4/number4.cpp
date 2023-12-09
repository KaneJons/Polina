#include <iostream>

using namespace std;

int main()
{
	int Array[10];
	srand(time(0)); //требуется, чтобы rand создавал новые экземпляры новых чисел
	for (int i = 0; i < 10; i++)
	{
		Array[i] = rand() % 61 - 20; //рандомные числа от -20 до 40
	}

	cout << "Сгенерированный массив: ";
	for (int i = 0; i < 10; ++i) {
		cout << Array[i] << " ";
	}

	cout << endl;
	// Произведение всех элементов в массиве
	long long product = 1;
	for (int i = 0; i < 10; ++i) {
		product *= Array[i];
	}
	cout << "Произведение всех элементов: " << product << endl;
	
	int Count = 0;
	for (int i = 0; i < 10; ++i) {
		if (Array[i] % 2 != 0) {
			++Count;
		}
	}

	cout << "Количество нечетных чисел: " << Count << endl;

	// Количество чисел , кратных трем
	Count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (Array[i] % 3 == 0)
			Count++;
	}

	cout << "Количнство чисел, кратных трем: " << Count << endl;

	// Проверка, упорядочены ли числа в масивве

	bool IsOrdered = true;
	for (int i = 1; i < 10; i++)
	{
		if (Array[i - 1] < Array[i])
		{
			IsOrdered = false;
			break;
		}
	}
	if (IsOrdered)
		cout << "Элементы массива упорядочены" << endl;
	else
		cout << "Элементы массива не упорядочены" << endl;

	// Отсортировка элементов массива: отрицательные, ноль, положительные

	int tmp;

	for (int i = 0; i < 10; i++)
	{
		if (Array[i] <= 0)
		{
			for (int j = 0; j < i; j++)
			{
				if (Array[j] > 0)
				{
					tmp = Array[i];
					Array[i] = Array[j];
					Array[j] = tmp;
				}
			}
		}
	}

	cout << "Отсортированные элементы массивов: ";

	for (int i = 0; i < 10; i++)
	{
		cout << Array[i] << " ";
	}

}

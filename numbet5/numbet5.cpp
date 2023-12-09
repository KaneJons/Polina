 #include <iostream>

using namespace std;

int main()
{
    const int n = 5;

    int Array[n][n];

    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            Array[i][j] = rand() % 61 - 30;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << Array[i][j] << "\t";

        cout << endl;
    }

    // Произведение элементов побочной диагонали
    int proizvedenie = 1;
    for (int i = 0; i < n; i++)
    {
        proizvedenie *= Array[i][n - 1 - i];
    }
    cout << "Произведение элементов побочной диагонали: " << proizvedenie << endl;
    
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (Array[i][j] > 0)
                count++;
        }
    }

    cout << "Количество положительных чисел , ниже главной диагонали " << count << endl;

    int ArrayMin[n];
    int min;
    for (int j = 0; j < n; j++)
    {
        min = 0;
        for (int i = 0; i < n; i++)
        {
            if (Array[min][j] > Array[i][j])
            {
                min = i;
            }
        }
        ArrayMin[j] = Array[min][j];
    }

    cout << "Минимальные элементы в каждом стобце:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i+1<<") " << ArrayMin[i] << ";  ";
    }
}

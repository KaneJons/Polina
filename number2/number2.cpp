#include <iostream>

using namespace std;

int main()
{
    double a = 0.1;
    double b = 1.2;
    double h = 0.1;

    cout << " x\t \t  y(x)" << endl;
    cout << endl;

    for (double x = a; x <= b; x += h) {
        double y = 0.0;

        for (int n = 1; n <= 20; ++n) {
            y += (((2*pow(n,2))+1) / (2*n)) * pow(x,(2*n)-2);
        }

        cout << x << "\t \t" << y << endl;
    }
}

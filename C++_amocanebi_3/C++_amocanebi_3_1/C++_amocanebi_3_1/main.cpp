#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double h = 0.01;
    double x = 1.0;
    double y;

    while (x <= 2.0)
    {
        y = pow(x, 2) - 2 * x + 5;
        cout << " y = " << y << endl;

        x = x + h;
    }

    return 0;
}

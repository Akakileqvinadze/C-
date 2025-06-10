#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 7.5, b = 3.64, z, y, x = 0.5, c = 0.6;
    cout << "x = ";
    cin >> x;

    y = (sqrt(pow(x, 2) + b * exp(-(x + c))) / (2 * (sin(x + c) + 1))) * A;
    z = log(y + 5) / log(5); // log base 5

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}

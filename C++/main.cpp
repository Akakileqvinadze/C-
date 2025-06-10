#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 4.5, b = 0.25, z, y, x = 4.5, c;
    cout << "c = ";
    cin >> c;

    y = ((sin(pow(x, 2) + b) + 2) / sqrt(pow(x, 3) - 0.1)) * exp(x + c) * A;
    z = pow(y, 2) + 1;

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}

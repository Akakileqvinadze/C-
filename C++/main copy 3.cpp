#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 5, z, y, x = 3;

    y = (A-1.1)*exp(pow(x,2))*(1+sin(x))/(1+pow(cos(x), 2));
    z = pow(y,3)-1;

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}


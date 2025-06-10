#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 0.5, z = 1.2, y, x;

    y = pow((cos(A*x))/(log(pow(x, 2)+2))+sqrt(A*x),3);
    z = pow(y,2)+A*x;

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}


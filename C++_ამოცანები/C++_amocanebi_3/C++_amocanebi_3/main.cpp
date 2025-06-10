#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 0.3, b = 3.64, z, y, x = 0.5;

    z = (pow(y,2)+1)/(x-A);
    y = -(1/sqrt(pow(x,2)-pow(A,2)))+(2*pow(A,2)+1)/3*sqrt(pow(x,2)-pow(A,2));

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}

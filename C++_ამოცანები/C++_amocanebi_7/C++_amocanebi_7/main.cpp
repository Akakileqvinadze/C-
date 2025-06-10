#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 2.8, B,z, y, x = 1.5;
    cout << "B = ";
    cin >> B;
    y = (sqrt(log(A+B)+x))/(exp(x)+1);
    z = fabs(pow(x, 2)-pow(y, 2));

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}

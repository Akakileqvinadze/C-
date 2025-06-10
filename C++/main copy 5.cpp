#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 10, z, y, x = 1.5;

    y = sqrt((log(x)+1)/(log(x)+2)+sin(x));
    z = A*y*sin(y);

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}

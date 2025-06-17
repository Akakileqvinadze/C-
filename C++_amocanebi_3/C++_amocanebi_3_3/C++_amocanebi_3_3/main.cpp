#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double y = 5;
    double x = 1;
    double z;
    double h1 = 0.02;
    double h2 = 0.01;

    do {
        z = sqrt(5*pow(x, 2)+7*pow(y, 3)+pow(cos(x*y), 2));
        x = x + h1;
        y = y + h2;
        
    } while (x<=11);
    cout << "z = " << z << endl;

    return 0;
}

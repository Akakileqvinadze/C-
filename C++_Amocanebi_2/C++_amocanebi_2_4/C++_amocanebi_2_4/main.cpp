#include <iostream>
#include <cmath>

int main()
{
    double x = 2;
    double A = 2.8;
    double c = 8;
    double B = -4.2;
    double z;

    double y = (sin(2 - x) + 1) / sqrt(exp(A - x));

    if (y < 1) {
        z = A * pow(x, 3) - 2;
        std::cout << "z = " << z << std::endl;
    }
    else if (y == 1) { // <- სწორად
        z = A * pow(x, 2) + B * x + c;
        std::cout << "z = " << z << std::endl;
    }
    else {
        z = c;
        std::cout << "z = " << z << std::endl;
    }

    return 0;
}

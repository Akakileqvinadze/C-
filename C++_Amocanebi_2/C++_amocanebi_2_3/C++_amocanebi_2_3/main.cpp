#include <iostream>
#include <cmath>

int main()
{
    double x = 12;
    double y;
    double A = 1.2;
    double c = 1.81;
    double B = pow(A, 2) - pow(c, 3) * cos(5 * x);

    double z = A / 3 * tan(cos((A - 1) / 2));

    if (B < 1) {
        y = 100;
        std::cout << "y = " << y << std::endl;
    }
    else if (B >= 1 && B < 2) { // <- სწორად
        y = B * pow(x, 3) + c;
        std::cout << "y = " << y << std::endl;
    }
    else if (B >= 2) {
        y = x + B;
        std::cout << "y = " << y << std::endl;
    }

    return 0;
}

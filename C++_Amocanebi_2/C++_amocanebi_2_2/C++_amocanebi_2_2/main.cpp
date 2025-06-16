#include <iostream>
#include <cmath>

int main()
{
    double x = 12.56;
    double y;
    double A = exp(sin(x));

    double z = A / 3 * tan(cos((A - 1) / 2));

    if (z > 0) {
        y = sqrt(1 + pow(x, 2));
        std::cout << "y = " << y << std::endl;
    }
    else if (z < 0) {
        y = (1 + x) * log(pow(x, 2));
        std::cout << "y = " << y << std::endl;
    }
    else if (z == 0) { // <- ზ = 0
        y = cos(x + 1);
        std::cout << "y = " << y << std::endl;
    }

    return 0;
}


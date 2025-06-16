#include <iostream>
#include <cmath>

int main()
{
    double r = 5, h = 12, v, v1;

    v = 3.14 * pow(r, 2) * h;
    std::cout << "cilindris moculoba = " << v << std::endl;

    v1 = (1.0/3.0) * 3.14 * pow(r, 2) * h;
    std::cout << "konusis moculoba = " << v1 << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

int main()
{
    double S, V, t;

    t = 3 * 60 + 25; // წამები
    S = 1000; // მეტრები

    V = S / t;

    std::cout << "V = " << V << " მ/წმ" << std::endl;

    return 0;
}

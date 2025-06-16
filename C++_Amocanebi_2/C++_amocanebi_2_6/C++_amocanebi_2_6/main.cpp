#include <iostream>
#include <cmath> // <- ჯობს <cmath> გამოიყენო

int main()
{
    double x;
    std::cin >> x;
    if (x>0){
        double y=sin(x)/x;
        std::cout << "x = " << y << std::endl;
    }
    return 0;
}

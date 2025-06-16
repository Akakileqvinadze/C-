#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cin >> a; //3
    cin >> b; //2
    cin >> c; //1
    
    //უნდა ვიპოვოთ  მათ შორის მაქსიმალური და მინიმალური
    
    if (a>b&&a>c)
    {
        cout << "რიცხვი: a = " << a << " ყველაზაე დიდიდა "  << endl;
    }
    else if (b>a&&b>c)
    {
        cout << "რიცხვი: b = " << b << " ყველაზაე დიდიდა "  << endl;
    }
    else if (c>a&&c>b)
    {
        cout << "რიცხვი: c = " << c << " ყველაზაე დიდიდა "  << endl;
    }

    cout << "შეტანილია: a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //პროგრამა რომელიც ჰერონის პორმულით გამოთვლის სამკუტხედის პართობს
    double C = 4, A = 2, B=3,P,S;
    
    //ნახევარპერიპეტრი
    P=(A+B+C)/2;
    S=sqrt(P*(P-A)*(P-B)*(P-C));

    cout << "S = " << S << endl;

    return 0;
}

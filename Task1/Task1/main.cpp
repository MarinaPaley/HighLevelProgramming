#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
    const auto z0 = Complex(3, 25);
    const auto z1 = z0.GetConjugate();

    cout << "z0 = " << z0.GetAlgebraView()
        << "\nz1 = " << z1.GetAlgebraView()
        << endl;

    return 0;
}

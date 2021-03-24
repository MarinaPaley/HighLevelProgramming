#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
    const auto z0 = Complex(3, 25);
    const auto z1 = z0.GetConjugate();

    cout << "z_0 = " << z0.GetAlgebraView()
        << "\nz_1 = " << z1.GetAlgebraView()
        << endl;

    cout << "z_0 = " << z0.GetTrigonometryView()
        << "\nz_1 = " << z1.GetTrigonometryView()
        << endl;

    cout << "z_0 = " << z0.GetExponentialView()
        << "\nz_1 = " << z1.GetExponentialView()
        << endl;

    const auto z2 = Complex(1, 1);
    const auto z3 = z0.Add(z2);

    cout << "z_2  = " << z2.GetAlgebraView();
    cout << "\nz_3 = " << z3.GetAlgebraView();

    return 0;
}

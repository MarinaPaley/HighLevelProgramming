#define _USE_MATH_DEFINES // for C++

#include <cmath>
#include <sstream>
#include "Complex.h"
#include "ExtendedMath.h"

Complex::Complex(const double re, const double im)
    : re(re), im(im)
{
}

Complex::Complex(const Complex& other)
    : Complex(other.GetRe(), other.GetIm())
{
}

double Complex::GetRe() const
{
    return this->re;
}

double Complex::GetIm() const
{
    return this->im;
}

double Complex::GetModulus() const
{
    return sqrt(pow(this->GetRe(), 2) + pow(this->GetIm(), 2));
}

double Complex::GetArgument() const
{
    const auto x = this->GetRe();
    const auto y = this->GetIm();
    if (x > 0 && !ExtMath::AreEqual(y, 0.0))
        return 2 * atan(y / (this->GetModulus() + x));
    if (x < 0 && y == 0)
        return M_PI;
    return NAN;
}

Complex Complex::GetConjugate() const
{
    return Complex(this->GetRe(), -1 * this->GetIm());
}

std::string Complex::GetAlgebraView() const
{
    std::stringstream buffer;
    buffer << this->GetRe() << " "
        << (std::signbit(this->GetIm()) ? "-" : "+") << " "
        << std::abs(this->GetIm()) << "i";
    return buffer.str();
}

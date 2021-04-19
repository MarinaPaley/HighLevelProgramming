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
    // TODO: Необходимо протестировать данное предположение на валидность.
    // за     -- see: https://en.wikipedia.org/wiki/Complex_number#Polar_complex_plane
    // против -- see: https://math.semestr.ru/math/images/argz.gif
    return std::atan2(this->GetRe(), this->GetIm());
}

Complex Complex::GetConjugate() const
{ 
    return Complex(this->GetRe(), -1 * this->GetIm());
}

std::string Complex::GetAlgebraView() const
{
    std::stringstream buffer;
    buffer << this->GetRe() << " "
        << this->getSignForImagePart() << " "
        << std::abs(this->GetIm()) << "\\i";
    return buffer.str();
}

std::string Complex::GetTrigonometryView() const
{
    std::stringstream buffer;
    buffer << "\\exp(" << this->GetRe() << ")" 
        << " \\cdot (\\cos(" << std::abs(this->GetIm()) << ")"
        << " " << this->getSignForImagePart() << " "
        << "\\i \\cdot \\sin(" << std::abs(this->GetIm()) << ")"
        << ")";
    return buffer.str();
}

std::string Complex::GetExponentialView() const
{
    std::stringstream buffer;
    buffer << "\\exp(" << this->GetAlgebraView() << ")";
    return buffer.str();
}

Complex& Complex::Add(const Complex& other) const
{
    const auto re = this->GetRe() + other.GetRe();
    const auto im = this->GetIm() + other.GetIm();
    const auto  sum = new Complex(re, im);
    return *sum;
}

char Complex::getSignForImagePart() const
{
    return std::signbit(this->GetIm()) ? '-' : '+';
}

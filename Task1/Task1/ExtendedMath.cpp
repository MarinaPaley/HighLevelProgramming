#include "ExtendedMath.h"
#include <cmath>
#include <limits>

inline bool ExtMath::AreEqual(const double x, const double y, const double epsilon)
{
    return std::abs(x - y) <= epsilon;
}

inline bool ExtMath::AreEqual(const double x, const double y)
{
    return AreEqual(x, y, std::numeric_limits<double>::epsilon());
}

inline bool ExtMath::IsZero(const double value, const double epsilon)
{
    return AreEqual(value, 0, epsilon);
}

inline bool ExtMath::IsZero(const double value)
{
    return AreEqual(value, 0);
}

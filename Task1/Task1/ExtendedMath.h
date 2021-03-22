#pragma once
#include <cmath>
#include <limits>

namespace ExtMath
{
    /**
     * \brief
     * \param x
     * \param y
     * \param epsilon
     * \return
     */
    inline bool AreEqual(const double x, const double y, const double epsilon)
    {
        return std::abs(x - y) <= epsilon;
    }

    /**
     * \brief
     * \param x
     * \param y
     * \return
     */
    inline bool AreEqual(const double x, const double y)
    {
        return AreEqual(x, y, std::numeric_limits<double>::epsilon());
    }
}

#pragma once

namespace ExtMath
{
    /**
     * \brief
     * \param x
     * \param y
     * \param epsilon
     * \return
     */
    bool AreEqual(const double x, const double y, const double epsilon);

    /**
     * \brief
     * \param x
     * \param y
     * \return
     */
    bool AreEqual(const double x, const double y);

    /**
     * \brief 
     * \param value 
     * \param epsilon 
     * \return 
     */
    bool IsZero(const double value, const double epsilon);

    /**
     * \brief 
     * \param value 
     * \return 
     */
    bool IsZero(const double value);
}

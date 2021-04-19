#pragma once
#include <string>

/**
 * \brief Класс Комплексное число
 */
class Complex
{
public:
    /**
     * \brief Конструктор с параметрами
     * \param re Действительная часть
     * \param im Мнимая часть
     */
    Complex(const double re = 0, const double im = 0);

    /**
     * \brief Конструктор копирования
     * \param other Комплексное число
     */
    Complex(const Complex& other);

    /**
     * \brief Перемещающий конструктор
     * \param other другое комплексное число
     */
    Complex(Complex&& other) = default;


    /**
     * \brief Деструктор
     */
    ~Complex() = default;

    /**
     * \brief Метод, возвращающий действительную часть
     * \return Действительная часть комплексного числа
     */
    double GetRe() const;

    /**
     * \brief Метод, возвращающий мнимую часть
     * \return Мнимая часть комплексного числа
     */
    double GetIm() const;

    /**
     * \brief Метод, возвращающий модуль комплексного числа
     * \return Модуль комплексного числа
     */
    double GetModulus() const;

    /**
     * \brief Метод, возвращающий аргумент
     * \return Аргумент комплексного числа
     */
    double GetArgument() const;

    /**
     * \brief Метод, возвращающий комплексно сопряженное число
     * \return Комплексно сопряженное число
     */
    Complex GetConjugate() const;

    /**
     * \brief Алгебраическое представление комплексного числа
     * \return Строковое представление комплексного числа
     * в алгебраическом виде
     */
    std::string GetAlgebraView() const;
    /**
     * \brief Тригонометрическое представление комплексного числа
     * \return Строковое представление комплексного числа
     * в тригонометрическом виде
     */
    std::string GetTrigonometryView() const;
    /**
     * \brief Экспоненциальное представление комплексного числа
     * \return Строковое представление комплексного числа
     * в экспоненциальном виде
     */
    std::string GetExponentialView() const;

    /**
     * \brief Метод сложения с другим комплексным числом
     * \param other Другое комплексное число
     * \return Третье (результат) комплексное число
     */
    Complex& Add(const Complex& other) const;

    /**
     * \brief 
     * \param other 
     * \return 
     */
    Complex& Sub(const Complex& other) const;

    /**
     * \brief 
     * \param other 
     * \return 
     */
    Complex& Mul(const Complex& other) const;

    /**
     * \brief 
     * \param other 
     * \return 
     */
    Complex& Div(const Complex& other) const;

    /**
     * \brief 
     * \param other 
     * \return 
     */
    bool AreEqual(const Complex& other) const;

private:
    char getSignForImagePart() const;

    /**
     * \brief Действительная часть комплексного числа.
     */
    double re;

    /**
     * \brief Мнимая часть комплексного числа.
     */
    double im;
};

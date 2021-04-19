#include "../Complex/Complex.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestComplex
{
    TEST_CLASS(UnitTestComplex)
    {
    public:

        TEST_METHOD(GetConjugate_ValidDate_Success)
        {
            // Arrange
            const Complex number(1, 42);
            const Complex expected(1, -42);

            // Act
            const auto actual = number.GetConjugate();

            // Assert
            Assert::AreEqual(
                expected,
                actual,
                L"Неправильно вычислено комплексно сопряженное");
        }
    };
}

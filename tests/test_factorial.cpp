#include <gtest/gtest.h>
#include "factorial.h" // Incluye la función factorial definida en el header

/**
 * @brief Prueba casos positivos comunes de factorial.
 */
TEST(FactorialTest, PositiveCases)
{
    EXPECT_EQ(factorial(0), 1);         // 0! = 1
    EXPECT_EQ(factorial(5), 120);       // 5! = 120
    EXPECT_EQ(factorial(10), 3628800);  // 10! = 3628800
}

/**
 * @brief Prueba el caso específico del valor cero.
 */
TEST(FactorialTest, ZeroInput)
{
    EXPECT_EQ(factorial(0), 1); // 0! = 1
}

/**
 * @brief Prueba entradas negativas para verificar el manejo de errores.
 */
TEST(FactorialTest, NegativeInput)
{
    EXPECT_EQ(factorial(-5), -1); // Error esperado
    EXPECT_EQ(factorial(-1), -1); // Error esperado
}

/**
 * @brief Test diseñado para fallar intencionalmente (para verificar validación de tests).
 */
TEST(FactorialTest, FailTestIntentional)
{
    // Incorrecto intencionalmente (4! = 24)
    EXPECT_EQ(factorial(4), 25); 
}

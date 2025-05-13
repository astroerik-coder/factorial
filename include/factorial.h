#ifndef FACTORIAL_H
#define FACTORIAL_H

/**
 * @brief Calcula el factorial de un número entero no negativo.
 *
 * Esta función calcula el factorial de un número entero no negativo n.
 * El factorial de n es el producto de todos los números enteros positivos
 * menores o iguales a n. El factorial de 0 está definido como 1.
 *
 * @param n Número entero no negativo del cual se desea calcular el factorial.
 * @return El factorial de n. Si n es negativo, retorna -1 como código de error.
 */

int factorial(int n) {
    if (n < 0) {
        // error
        return -1; 
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

#endif // FACTORIAL_H


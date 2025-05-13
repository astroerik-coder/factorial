/**
 * @file main.cpp
 * @brief Main program to calculate the factorial of a number.
 */

#include <iostream>
#include "factorial.h"

/**
 * @brief The main function of the program.
 *
 * Prompts the user to enter a non-negative integer, calculates its factorial
 * using the factorial function, and prints the result or an error message
 * if the input is invalid.
 *
 * @return 0 if the program executes successfully.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/factorial.h"

int main() {
    int n;
    char input[100];

    printf("Introduce un número entero positivo (o 0): ");
    if (!fgets(input, sizeof(input), stdin)) {
        printf("Error al leer la entrada.\n");
        return 1;
    }

    // Validar que la entrada es un número positivo
    char *p = input;
    while (*p != '\0' && *p != '\n') {
        if (!isdigit(*p)) {
            printf("Entrada invalida: solo se permiten numeros enteros positivos.\n");
            return 1;
        }
        p++;
    }

    n = atoi(input); // convertir a entero

    int result = factorial(n);
    if (result == -1) {
        printf("Error: el numero debe ser mayor o igual a 0.\n");
    } else {
        printf("El factorial de %d es %d\n", n, result);
    }

    return 0;
}


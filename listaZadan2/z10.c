#include <stdio.h>
#include "z10.h"

void z10() {
    float num1, num2, res;
    char operator;

    printf("Podaj wyrazenie w formie: liczba operator liczba:\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '-':
            res = num1 - num2;
            break;
        case '+':
            res = num1 + num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 == 0)
                printf("Druga liczba nie moze byc 0\n");
            else
                res = num1 / num2;
            break;
        default:
            printf("Liczb albo symbolu nie bylo podano\n");
            break;
    }

    printf("Wynik: %.2f %c %.2f = %.2f;\n", num1, operator, num2, res);
}
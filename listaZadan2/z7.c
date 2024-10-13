#include <stdio.h>
#include "z7.h"

void z7() {
    // Program 1
    int a, b, c, max;

    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Najwieksza liczba to: %d\n", max);

    // Program 2
    int num1, num2, sum1;

    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &num1, &num2);

    sum1 = (num1 < 0 && num2 < 0) ? num1 + num2 : 0;
    if (sum1 != 0) {
        printf("Suma liczb %d i %d to: %d\n", num1, num2, sum1);
    } else {
        printf("Obie liczby nie sa ujemne, brak sumy.\n");
    }

    // Project 3
    int num3, num4, sum2;

    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);

    sum2 = ((num3 >= 0 && num4 >= 0) || (num3 < 0 && num4 < 0)) ? num3 + num4 : 0;

    if (sum1 != 0) {
        printf("Suma liczb %d i %d to: %d\n", a, b, sum1);
    } else {
        printf("Liczby maja rozne znaki, brak sumy.\n");
    }
}
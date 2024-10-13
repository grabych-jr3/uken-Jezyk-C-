#include <stdio.h>
#include "z3.h"

void z3() {
    char a = 'a', b = 'b';
    int num1 = 4, num2 = 5;
    float num3 = 3.0, num4 = 4.0;
    double num5 = 5.0, num6 = 6.0;

    printf("Zmienne typu char: %c, %c\n", a, b);
    printf("Zmienne typu int: %d, %d\n", num1, num2);
    printf("Zmienne typu float: %f, %f\n", num3, num4);
    printf("Zmienne typu double: %f, %f\n", num5, num6);

}
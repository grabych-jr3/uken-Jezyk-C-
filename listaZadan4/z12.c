//
// Created by vgrab on 08.12.2024.
//

#include "z12.h"
#include <stdio.h>

void bigger_number(double *a, double *b) {
    if (*a > *b) {
        *b = *a;
    }else {
        *a = *b;
    }
}

void z12() {
    double a, b;
    printf("Podaj liczbe: ");
    scanf("%lf", &a);
    printf("Podaj liczbe: ");
    scanf("%lf", &b);

    bigger_number(&a, &b);
    printf("Liczba a: %lf\n", a);
    printf("Liczba b: %lf\n", b);
}
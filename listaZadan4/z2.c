//
// Created by vgrab on 08.12.2024.
//

#include <stdio.h>
#include "z2.h"

double max(double a, double b) {
    if (b > a) {
        return b;
    }
    return a;
}

void z2() {
    double num1, num2;

    printf("Podaj liczbe: ");
    scanf("%lf", &num1);
    printf("Podaj liczbe: ");
    scanf("%lf", &num2);

    double result = max(num1, num2);

    printf("Wynik: %lf", result);

}
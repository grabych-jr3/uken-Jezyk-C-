//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z4.h"

double power(double *base, int *exponent) {
    double result = 1.0;
    int abs_exponent = (*exponent < 0) ? -(*exponent) : *exponent; // Wartość bezwzględna wykładnika

    for (int i = 0; i < abs_exponent; i++) {
        result *= *base;
    }

    if (*exponent < 0) {
        result = 1.0 / result; // Dla wykładnika ujemnego
    }

    return result;
}

void z4() {
    double liczba1 = 3.1, liczba2 = 5.5, wynik1, wynik2;
    int potega1 = 2, potega2 = 3;
    double wynik;

    // Wywołanie funkcji power z użyciem wskaźników
    wynik1 = power(&liczba1, &potega1);
    wynik2 = power(&liczba2, &potega2);

    // Obliczenie wyrażenia
    wynik = wynik1 + wynik2 + 24;

    // Wyświetlenie wyników
    printf("Wynik wyrażenia (3.1)^2 + (5.5)^3 + 24 wynosi: %.2f\n", wynik);
}
//
// Created by vgrab on 08.12.2024.
//

#include <stdio.h>
#include "z10.h"

float suma_modulow(float *liczba1, float *liczba2) {
    float suma = 0;
    if (*liczba1 < 0) {
        *liczba1 += *liczba1 * -2;
    }
    if (*liczba2 < 0) {
        *liczba2 += *liczba2 * -2;
    }
    suma += *liczba1 + *liczba2;
    return suma;
}

void z10() {
    float liczba1, liczba2;
    printf("Podaj liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj liczbe: ");
    scanf("%f", &liczba2);

    float wynik = suma_modulow(&liczba1, &liczba2);
    printf("Suma modulow: %f\n", wynik);
}

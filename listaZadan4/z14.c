//
// Created by vgrab on 08.12.2024.
//

#include "z14.h"
#include <stdio.h>

void dekompozycja(double *liczba, double *cu, int *cc) {
    *cc = (int)*liczba;
    *cu = *liczba - *cc;
}

void z14() {
    double liczba;
    printf("Podaj liczbe: ");
    scanf("%lf", &liczba);

    double cu;
    int cc;

    dekompozycja(&liczba, &cu, &cc);
    printf("Czesc ulamkowa: %.2lf\n", cu);
    printf("Czesc calkowita: %d\n", cc);
}
//
// Created by vgrab on 08.12.2024.
//

#include "z15.h"
#include <stdio.h>

void pobierz_zakres(int min, int max, int *liczba) {
    do {
        printf("Podaj liczbe calkowitą z zakresu [%d, %d]: ", min, max);
        scanf("%d", liczba);
        if (*liczba < min || *liczba > max) {
            printf("Blad! Liczba musi byc z zakresu [%d, %d]. Sprobuj ponownie.\n", min, max);
        }
    } while (*liczba < min || *liczba > max);
}

void z15() {
    int min, max, liczba;

    printf("Podaj minimalna wartosc zakresu: ");
    scanf("%d", &min);
    printf("Podaj maksymalna wartosc zakresu: ");
    scanf("%d", &max);

    pobierz_zakres(min, max, &liczba);
}
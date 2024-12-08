//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z5.h"

int iloscJedynek(unsigned int *x) {
    int iloscJedynek = 0;
    while (*x > 0) {
        if (*x % 2 == 1) {
            iloscJedynek++;
        }
        *x/=2;
    }
    return iloscJedynek;
}

void z5() {
    unsigned int liczba;
    printf("Podaj liczbe: ");
    scanf("%u", &liczba);

    int wynik = iloscJedynek(&liczba);
    printf("Wynik = %d\n", wynik);
}
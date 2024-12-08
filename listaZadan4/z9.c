//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z9.h"

int mniejsza(int *a, int *b) {
    if (*a > *b) {
        return *a;
    }
    return *b;
}

void z9() {
    int liczba1, liczba2;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj liczbe: ");
    scanf("%d", &liczba2);

    int wynik = mniejsza(&liczba1, &liczba2);
    printf("Wynik = %d\n", wynik);
}
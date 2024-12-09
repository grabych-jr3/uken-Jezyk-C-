//
// Created by vgrab on 09.12.2024.
//

#include "z4.h"
#include <stdio.h>

int liczbaDzielnikow(int *tab, int size, int k) {
    int ilosc = 0;
    for (int i = 0; i < size; i++) {
        if (k % tab[i] == 0) {
            ilosc++;
        }
    }
    return ilosc;
}

void z4() {
    int tab[5] = {5, 9, 3, 2, 8};
    int k;
    printf("Podaj liczbe: ");
    scanf("%d", &k);
    int wynik = liczbaDzielnikow(tab, 5, k);
    printf("LiczbaDzielnikow: %d\n", wynik);
}
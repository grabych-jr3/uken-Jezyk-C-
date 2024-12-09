//
// Created by vgrab on 09.12.2024.
//

#include "z10.h"
#include <stdio.h>

#include "z5.h"

void f10(int *tab, int n, int *indeks) {
    int max_suma = tab[0] + tab[1];
    *indeks = 0;

    for (int i = 1; i < n; i++) {
        int suma = tab[i] + tab[i + 1];
        if (suma > max_suma) {
            max_suma = suma;
            *indeks = i;
        }
    }
}

void z10() {
    int tab[] = {4, 9, -3, 2, 8, 7};
    int n = sizeof(tab) / sizeof(tab[0]);
    int indeks;

    printf("Tablica: ");
    print_tab(tab, n);

    f10(tab, n, &indeks);
    printf("Indeks = %d\n", indeks);
}

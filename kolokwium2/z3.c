//
// Created by vgrab on 11.12.2024.
//

#include "z3.h"
#include <stdio.h>

void kopiujPrzedZero(int* tab1, int n1, int* tab2, int n2) {
    int i = 0;

    // Znalezienie pierwszego wystąpienia 0 w tablicy 1
    while (i < n1 && tab1[i] != 0) {
        i++;
    }

    if (i == n1) {
        printf("Brak wartosci zero w tablicy 1!\n");
        return;
    }

    int liczbaElementowDoKopiowania = i;

    // Znalezienie pierwszego wystąpienia 0 w tablicy 2
    int j = 0;
    while (j < n2 && tab2[j] != 0) {
        j++;
    }

    if (j == n2) {
        printf("Brak wolnego miejsca w tablicy 2!\n");
        return;
    }

    // Kopiowanie wartości przed pierwszym 0 z tablicy 1 do tablicy 2
    for (int k = 0; k < liczbaElementowDoKopiowania; k++) {
        if (j + k >= n2) {
            printf("Tablica 2 za mala, aby zapisac wszystkie wartosci!\n");
            return;
        }
        tab2[j + k] = tab1[k];
    }

    // Umieszczenie 0 po skopiowanych wartościach
    if (j + liczbaElementowDoKopiowania < n2) {
        tab2[j + liczbaElementowDoKopiowania] = 0;
    } else {
        printf("Brak miejsca na dodanie wartosci zero w tablicy 2!\n");
    }
}

void z3() {
    int tab1[] = {4, 2, 6, 0, 8, 0, 9};
    int tab2[] = {1, 3, 5, 0, 7, 0, 3, 1, 7, 5};

    int n1 = sizeof(tab1) / sizeof(tab1[0]);
    int n2 = sizeof(tab2) / sizeof(tab2[0]);

    kopiujPrzedZero(tab1, n1, tab2, n2);

    printf("Tablica 2 po modyfikacji:\n");
    for (int i = 0; i < n2; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");
}
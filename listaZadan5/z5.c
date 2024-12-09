#include "z5.h"
#include <stdio.h>

// Funkcja zamieniająca wartości minimalnego i maksymalnego elementu tablicy
void zmiana(int *tab, int size) {
    int temp;
    int min = 255, max = -255;  // Zakres początkowy wartości
    int min_indeks = -1;        // Indeks minimalnego elementu
    int max_indeks = -1;        // Indeks maksymalnego elementu

    for (int i = 0; i < size; i++) {
        if (tab[i] < min) {
            min = tab[i];
            min_indeks = i;
        }
        if (tab[i] > max) {
            max = tab[i];
            max_indeks = i;
        }
    }

    // Zamiana wartości minimalnego i maksymalnego elementu
    if (min_indeks != -1 && max_indeks != -1) {
        temp = tab[min_indeks];
        tab[min_indeks] = tab[max_indeks];
        tab[max_indeks] = temp;
    }
}

// Funkcja drukująca zawartość tablicy
void print_tab(int *tab, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void z5() {
    int tab[5] = {4, 9, -3, 2, 8};
    printf("Tablica przed zmianą:\n");
    print_tab(tab, 5);

    zmiana(tab, 5);

    printf("Tablica po zmianie:\n");
    print_tab(tab, 5);
}

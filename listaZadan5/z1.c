#include "z1.h"
#include <stdio.h>

#define rozmiar 10

void printTab(int tab[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", tab[i]);
    }
}

void z1() {
    int tab[rozmiar] = {1, 4, 7, 2, 8, 9, 2, 0, -5, -2};

    printTab(tab, rozmiar);
}

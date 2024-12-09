//
// Created by vgrab on 09.12.2024.
//

#include "z3.h"
#include <stdio.h>

void complete_array(double *tab, int size) {
    for (int i = 0; i < size; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%lf", &tab[i]);
    }
}

void print_array(double *tab, int size) {
    for (int i = 0; i < size; i++) {
        printf("%lf ", tab[i]);
    }
}

void z3() {
    double tab[rozmiar];
    complete_array(tab, rozmiar);
    print_array(tab, rozmiar);
}
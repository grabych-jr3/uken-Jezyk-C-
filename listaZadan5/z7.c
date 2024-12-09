//
// Created by vgrab on 09.12.2024.
//

#include "z7.h"
#include <stdio.h>

void przesun(int *tab, int size) {
    int temp = tab[0];
    for (int i = 0; i < size; i++) {
        tab[i] = tab[i + 1];
    }
    tab[size - 1] = temp;
}

void print_tab7(int *tab, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

void z7() {
    int tab[7] = {5, 2, 9, 6, 1, -5, 0};
    print_tab7(tab, 7);
    przesun(tab, 7);
    print_tab7(tab, 7);
}
//
// Created by vgrab on 09.12.2024.
//

#include "z11.h"
#include <stdio.h>

#include "z5.h"


void sortowanie(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int y = i + 1; y < n; y++) {
            if (tab[y] < tab[min_index]) {
                min_index = y;
            }
        }
        int temp = tab[i];
        tab[i] = tab[min_index];
        tab[min_index] = temp;
    }
}

void z11() {
    int tab[5] = {4, 8, 1, -6, 3};
    int n = 5;

    print_tab(tab, n);
    sortowanie(tab, n);
    print_tab(tab, n);
}


//
// Created by vgrab on 09.12.2024.
//

#include "z8.h"
#include <stdio.h>

#include "z5.h"

void f8(int *tab, int size) {

    for (int i = 0; i < size/2; i++) {
        int temp = tab[size - i - 1];
        tab[size - i - 1] = tab[i];
        tab[i] = temp;
    }
}

void z8() {
    int tab[7] = {4, 7, 2, -5, 3, 0 ,1};
    print_tab(tab, 7);
    f8(tab, 7);
    print_tab(tab, 7);
}
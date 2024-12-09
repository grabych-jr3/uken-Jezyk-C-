//
// Created by vgrab on 09.12.2024.
//

#include "z9.h"
#include <stdio.h>

#include "z5.h"

void f9(int *tab, int size, int x) {
    for (int i = 0; i < size; i++) {
        tab[i] *= x;
    }
}

void z9() {
    int tab[7] = {1, 2, 3, 4, 5, 6, 7};
    int x;
    printf("Podaj x: ");
    scanf("%d", &x);

    print_tab(tab, 7);
    f9(tab, 7, x);
    print_tab(tab, 7);
}

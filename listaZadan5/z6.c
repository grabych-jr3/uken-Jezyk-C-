//
// Created by vgrab on 09.12.2024.
//

#include "z6.h"
#include <stdio.h>

void f6(int *tab, int size, int *d, int *u, int *z) {
    for (int i = 0; i < size; i++) {
        if (tab[i] > 0) {
            (*d)++;
        }else if (tab[i] < 0) {
            (*u)++;
        }else {
            (*z)++;
        }
    }
}

void z6() {
    int tab[10] = {5, -2, 0, -1, 9, 6, 2, 0, -9, -4};
    int iloscDod = 0, iloscUje = 0, iloscZer = 0;
    f6(tab, 10, &iloscDod, &iloscUje, &iloscZer);
    printf("Liczb dodatnich: %d\n", iloscDod);
    printf("Liczb ujemnych: %d\n", iloscUje);
    printf("Liczb rownych zero: %d\n", iloscZer);
}
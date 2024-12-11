//
// Created by vgrab on 11.12.2024.
//

#include "z1.h"
#include <stdio.h>

int nwd(int a, unsigned b) {
    while (b != 0) {
        unsigned temp = b;
        b = a % b;
        a = (int)temp;
    }
    return a;
}

void uproscWszystkieUlamki(struct ulamek *tab, int n) {
    for (int i = 0; i < n; i++) {
        int dzielnik = nwd(tab[i].licznik, tab[i].mianownik);
        tab[i].licznik /= dzielnik;
        tab[i].mianownik /= dzielnik;
    }
}

void sortowanie(struct ulamek *tab, int n) {
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (((float)tab[j].licznik / (float)tab[j].mianownik) < ((float)tab[min_index].licznik / (float)tab[min_index].mianownik)) {
                min_index = j;
            }
        }

        struct ulamek temp = tab[i];
        tab[i] = tab[min_index];
        tab[min_index] = temp;
    }
}

void print_tab(struct ulamek *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d/%u ", tab[i].licznik, tab[i].mianownik);
    }
    printf("\n");
}

void z1() {
    struct ulamek ulamki[5] = {
        {4, 9},
        {6, 3},
        {2, 7},
        {-4, 2},
        {5,8}
    };

    print_tab(ulamki, 5);
    sortowanie(ulamki, 5);
    print_tab(ulamki, 5);

    uproscWszystkieUlamki(ulamki, 5);
    print_tab(ulamki, 5);
}
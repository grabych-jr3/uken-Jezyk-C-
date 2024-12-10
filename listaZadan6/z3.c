//
// Created by vgrab on 10.12.2024.
//

#include "z3.h"
#include <stdio.h>
#include "z1.h"

void uzupelnij3(struct product *tab, int size) {
    for (int i = 0; i < size; i++) {
        struct product product;
        printf("Podaj dane dla produktu:\n");
        printf("ID: ");
        scanf("%d", &product.id);
        printf("Nazwa: ");
        scanf("%s", product.name);
        printf("Waga: ");
        scanf("%lf", &product.weight);
        printf("Cena: ");
        scanf("%lf", &product.price);
        tab[i] = product;
    }
}

void wyswietl3(struct product *tab, int size) {
    for (int i = 0; i < size; i++) {
        printf("Produkt: ID=%d, Nazwa=%s, Waga=%.2f, Cena=%.2f\n", tab[i].id, tab[i].name, tab[i].weight, tab[i].price);
    }
}

void z3() {
    struct product tab[2];

    uzupelnij3(tab, 2);
    wyswietl3(tab, 2);
}
//
// Created by vgrab on 10.12.2024.
//

#include "z2.h"
#include <stdio.h>
#include "z1.h"

void uzupelnij(struct product *product) {
    printf("Podaj dane dla drugiego produktu:\n");
    printf("ID: ");
    scanf("%d", &product->id);
    printf("Nazwa: ");
    scanf("%s", product->name);
    printf("Waga: ");
    scanf("%lf", &product->weight);
    printf("Cena: ");
    scanf("%lf", &product->price);
}

void wyswietl(struct product *product) {
    printf("Produkt: ID=%d, Nazwa=%s, Waga=%.2f, Cena=%.2f\n", product->id, product->name, product->weight, product->price);
}

void z2() {
    struct product product1;
    struct product product2;

    uzupelnij(&product1);
    uzupelnij(&product2);

    wyswietl(&product1);
    wyswietl(&product2);
}
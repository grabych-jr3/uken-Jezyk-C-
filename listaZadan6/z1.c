//
// Created by vgrab on 10.12.2024.
//

#include "z1.h"
#include <stdio.h>

void z1() {
    struct product product1 = {1, "chocolate", 2.5, 10.99};
    struct product product2;
    struct product product3;
    struct product *ptr = &product3;

    printf("Podaj dane dla drugiego produktu:\n");
    printf("ID: ");
    scanf("%d", &product2.id);
    printf("Nazwa: ");
    scanf("%s", product2.name);
    printf("Waga: ");
    scanf("%lf", &product2.weight);
    printf("Cena: ");
    scanf("%lf", &product2.price);

    printf("Podaj dane dla trzeciego produktu:\n");
    printf("ID: ");
    scanf("%d", &ptr->id);
    printf("Nazwa: ");
    scanf("%s", ptr->name);
    printf("Waga: ");
    scanf("%lf", &ptr->weight);
    printf("Cena: ");
    scanf("%lf", &ptr->price);

    printf("\nDane wszystkich produktów:\n");
    printf("Produkt 1: ID=%d, Nazwa=%s, Waga=%.2f, Cena=%.2f\n", product1.id, product1.name, product1.weight, product1.price);
    printf("Produkt 2: ID=%d, Nazwa=%s, Waga=%.2f, Cena=%.2f\n", product2.id, product2.name, product2.weight, product2.price);
    printf("Produkt 3: ID=%d, Nazwa=%s, Waga=%.2f, Cena=%.2f\n", ptr->id, ptr->name, ptr->weight, ptr->price);

}
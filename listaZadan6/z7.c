//
// Created by vgrab on 10.12.2024.
//

#include "z7.h"
#include <stdio.h>

void najdrozszy(struct samochod *tab, int n) {
    int max_indeks, max = -1;
    for (int i = 0; i < n; i++) {
        if (tab[i].cena > max) {
            max = tab[i].cena;
            max_indeks = i;
        }
    }
    printf("Najdrozszy samochod: %s %s;\nCena: %.2f\n", tab[max_indeks].marka, tab[max_indeks].model, tab[max_indeks].cena);
}

void najmlodszy(struct samochod *tab, int n) {
    int min_indeks, min = 2025;
    for (int i = 0; i < n; i++) {
        if (tab[i].rok < min) {
            min = tab[i].rok;
            min_indeks = i;
        }
    }
    printf("Najmlodszy samochod: %s %s;\nCena: %d\n", tab[min_indeks].marka, tab[min_indeks].model, tab[min_indeks].rok);
}

float sredniaCena(struct samochod *tab, int n) {
    int ceny[n], sum = 0;
    for (int i = 0; i < n; i++) {
        ceny[i] = tab[i].cena;
    }

    for (int i = 0; i < n; i++) {
        sum += ceny[i];
    }
    float srednia = sum / n;
    return srednia;
}

void z7() {
    struct samochod tab[3] = {
        {"BMW", "M5", 2021, 50000},
        {"Mercedes", "Benz", 2014, 35000},
        {"Toyota", "Camry", 2015, 20000},
    };

    najdrozszy(tab, 3);
    najmlodszy(tab, 3);
    float srednia = sredniaCena(tab, 3);
    printf("Srednia cena samochodow: %.2f", srednia);
}
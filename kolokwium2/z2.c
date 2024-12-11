//
// Created by vgrab on 11.12.2024.
//

#include "z2.h"
#include <stdio.h>
#include <stdlib.h>

void dodajStudenta(struct student *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("Student #%d:\n", i + 1);
        printf("Podaj imie: ");
        scanf("%s", tab[i].imie);
        printf("Podaj wiek: ");
        scanf("%d", &tab[i].wiek);
        printf("Podaj srednia ocene: ");
        scanf("%f", &tab[i].sredniaOcena);
        printf("\n");
    }
}

void wyswietlStudentow(struct student *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("Student #%d:\n", i + 1);
        printf("Imie: %s\n", tab[i].imie);
        printf("Wiek: %d\n", tab[i].wiek);
        printf("Srednia: %.2f\n", tab[i].sredniaOcena);
        printf("\n");
    }
}

struct student *znajdzNajlepszegoStudenta(struct student * tab, int n) {
    float max = -255;
    struct student *wsk;
    for (int i = 0; i < n; i++) {
        if (tab[i].sredniaOcena > max) {
            max = tab[i].sredniaOcena;
            wsk = &tab[i];
        }
    }
    return wsk;
}

void z2() {
    int length;
    printf("Podaj liczbe studentow: ");
    scanf("%d", &length);

    struct student* students = (struct student*)malloc(length * sizeof(struct student));
    dodajStudenta(students, length);
    wyswietlStudentow(students, length);
    struct student *wsk = znajdzNajlepszegoStudenta(students, length);
    printf("Imie: %s\nWiek: %d\nSrednia: %.2f\n", wsk->imie, wsk->wiek, wsk->sredniaOcena);
    free(students);
}
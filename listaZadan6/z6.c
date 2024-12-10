//
// Created by vgrab on 10.12.2024.
//

#include "z6.h"
#include <stdio.h>

void wypisz(struct student *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Imie: %s\n", tab[i].imie);
        printf("Nazwisko: %s\n", tab[i].nazwisko);
        printf("Rok: %d\n", tab[i].rok);
        printf("Kierunek: %s\n", tab[i].kierunek);
        printf("Oceny: ");
        for (int j = 0; j < sizeof(tab[i].oceny)/sizeof(tab[i].oceny[0]); j++) {
            printf("%d ", tab[i].oceny[j]);
        }
        printf("\n");
    }
}

void calculateAverageGrades(struct student *students, int n, float *averages) {
    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].oceny[j];
        }
        averages[i] = sum / 5;
    }
}

void printTopStudent(struct student *students, int n, float *averages) {
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (averages[i] > averages[topIndex]) {
            topIndex = i;
        }
    }
    printf("Student o najwyzszej sredniej:\n");
    printf("%s %s, Rok: %d, Kierunek: %s, Srednia: %.2f\n",
           students[topIndex].imie,
           students[topIndex].nazwisko,
           students[topIndex].rok,
           students[topIndex].kierunek,
           averages[topIndex]);
}

void z6() {
    struct student tab[5] = {
        {"Vladyslav", "Hrabovskyi", 1, "Informatyka", {10, 5, 3, 9, 8}},
        {"Ostap", "Melnyk", 1, "Informatyka", {2, 2, 3, 7, 8}},
        {"Oleksandr", "Perczyszyn", 1, "Logistyka", {9, 5, 7, 4, 8}},
        {"Andriy", "Nyszczyi", 1, "Logistyka", {8, 4, 3, 1, 7}},
        {"Agnieszka", "Chujeszka", 1, "Informatyka", {2, 2, 2, 2, 2}}
    };

    wypisz(tab, 5);
    float averages[5];

    calculateAverageGrades(tab, 5, averages);
    printTopStudent(tab, 5, averages);

}
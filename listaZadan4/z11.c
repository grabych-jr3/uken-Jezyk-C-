//
// Created by vgrab on 08.12.2024.
//

#include "z11.h"
#include <stdio.h>

void zmiana(int *a, int *b) {
    if (*b < *a) {
        int temp = *b;
        *b = *a;
        *a = temp;
    }
}

void z11() {
    int a, b;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    printf("Podaj liczbe: ");
    scanf("%d", &b);

    zmiana(&a, &b);
    printf("Liczba a: %d\n", a);
    printf("Liczba b: %d\n", b);
}
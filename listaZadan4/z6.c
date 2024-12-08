//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z6.h"

void wyswietl(char *c, int *num1, int *num2) {
    for (int i = 0; i < *num2; i++) {
        for (int j = 0; j < *num1; j++) {
            printf("%c", *c);
        }
        printf("\n");
    }
}

void z6() {
    char znak;
    int num1, num2;

    printf("Podaj znak: ");
    scanf("%c", &znak);
    printf("Podaj num1: ");
    scanf("%d", &num1);
    printf("Podaj num2: ");
    scanf("%d", &num2);

    wyswietl( &znak, &num1, &num2);
}
#include <stdio.h>
#include "z11.h"

void z11() {
    int punkty, dziesiatki;

    printf("Podaj liczbe punktow (0 - 100): ");
    scanf("%d", &punkty);

    if (punkty < 0 || punkty > 100) {
        printf("Blad: liczba punktow musi byc w przedziale 0 - 100.\n");
        return;
    }

    dziesiatki = punkty / 10;

    switch (dziesiatki) {
        case 10:
        case 9:
            printf("Ocena: A\n");
            break;
        case 8:
            printf("Ocena: B\n");
            break;
        case 7:
            printf("Ocena: C\n");
            break;
        case 6:
            printf("Ocena: D\n");
            break;
        default:
            printf("Ocena: E\n");
            break;
    }
}
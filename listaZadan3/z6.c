#include <stdio.h>
#include "z6.h"

void z6() {
    float liczba;
    float max = -1.0;

    printf("Wprowadz liczby (wpisz 0 lub liczbe ujemna, aby zakonczyc):\n");

    while (1) {
        printf("Podaj liczbe: ");
        scanf("%f", &liczba);

        if (liczba <= 0) {
            break;
        }

        if (liczba > max) {
            max = liczba;
        }
    }

    if (max == -1.0) {
        printf("Nie wprowadzono zadnych nieujemnych liczb.\n");
    } else {
        printf("Najwieksza wprowadzona liczba nieujemna to: %.2f\n", max);
    }

}
#include <stdio.h>
#include "z7.h"

void z7() {
    float miesieczneWynagrodzenie;
    float kursEuro = 0.23;
    float kursDolar = 0.25;

    printf("Podaj wynagrodzenie za miesiac (w zl): ");
    scanf("%f", &miesieczneWynagrodzenie);

    float roczneWynagrodzenie = miesieczneWynagrodzenie * 12;

    float roczneWynagrodzenieEuro = roczneWynagrodzenie * kursEuro;
    float roczneWynagrodzenieDolar = roczneWynagrodzenie * kursDolar;

    // Виводимо результати
    printf("Roczne wynagrodzenie w zl: %.2f zl\n", roczneWynagrodzenie);
    printf("Roczne wynagrodzenie w euro: %.2f EUR\n", roczneWynagrodzenieEuro);
    printf("Roczne wynagrodzenie w dolarach: %.2f USD\n", roczneWynagrodzenieDolar);
}
#include <stdio.h>
#include "z9.h"

void z9() {
    int choice;
    float distance, time;
    const int air_speed = 343;
    const int water_speed = 1490;
    const int steel_speed = 5100;

    printf("Wybierz osrodek rozchodzenia sie dzwieku:\n");
    printf("1. Powietrze (343 m/s)\n");
    printf("2. Woda (1490 m/s)\n");
    printf("3. Stal (5100 m/s)\n");
    printf("Wpisz swoj wybor: ");
    scanf("%d", &choice);


    if (choice < 1 || choice > 3) {
        printf("Nieprawidlowy wybor. Sprobuj ponownie.\n");
        return;
    }

    printf("Podaj odleglosc, jaka dzwiek przebyje (w metrach): ");
    scanf("%f", &distance);

    if (distance <= 0) {
        printf("Odleglosc musi byc wieksza od zera.\n");
        return;
    }

    switch (choice) {
        case 1:
            time = distance / air_speed;
        printf("Czas potrzebny w powietrzu: %.2f sekund\n", time);
        break;
        case 2:
            time = distance / water_speed;
        printf("Czas potrzebny w wodzie: %.2f sekund\n", time);
        break;
        case 3:
            time = distance / steel_speed;
        printf("Czas potrzebny w stali: %.2f sekund\n", time);
        break;
    }
}
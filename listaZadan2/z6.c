#include <stdio.h>
#include "z6.h"

void z6() {
    int liczba, wynik;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    wynik = (liczba < 0) ? -liczba : liczba;

    printf("Wartosc bezwzgledna liczby %d to: %d\n", liczba, wynik);
}
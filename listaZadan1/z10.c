#include <stdio.h>
#include "z10.h"

void z10() {
    int sekundy;

    printf("Podaj czas w sekundach: ");
    scanf("%d", &sekundy);

    int godziny = sekundy / 3600;
    sekundy %= 3600;
    int minuty = sekundy / 60;
    sekundy %= 60;


    printf("Czas: %d godzin, %d minut, %d sekund\n", godziny, minuty, sekundy);
}
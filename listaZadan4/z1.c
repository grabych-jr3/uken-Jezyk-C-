#include <stdio.h>
#include "z1.h"

double sredniaHarmoniczna(double a, double b) {
    if (a == 0 || b == 0) {
        printf("Liczby nie mogą być zerowe.\n");
        return 0;
    }
    return 2.0 / ((1.0 / a) + (1.0 / b));
}

void z1() {
    double liczba1, liczba2, wynik;

    printf("Podaj pierwsza liczba: ");
    scanf("%lf", &liczba1);

    printf("Podaj druga liczbe");
    scanf("%lf", &liczba2);

    wynik = sredniaHarmoniczna(liczba1, liczba2);

    if (wynik != 0) {
        printf("srednia harmoniczna %.2f i %.2f wynosi: %.2f\n", liczba1, liczba2, wynik);
    }

}
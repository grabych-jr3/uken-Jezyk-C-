#include <stdio.h>
#include "z12.h"

// Функція для обчислення НСД (найбільшого спільного дільника, największy wspólny dzielnik)
int nwd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void z12() {
    int licznik1, mianownik1;
    int licznik2, mianownik2;
    int resLicznik, resMianownik;

    printf("Podaj pierwszy ulamek:\n");
    printf("Licznik: ");
    scanf("%d", &licznik1);

    printf("Mianownik: ");
    scanf("%d", &mianownik1);

    printf("Podaj drugi ulamek:\n");
    printf("Licznik: ");
    scanf("%d", &licznik2);

    printf("Mianownik: ");
    scanf("%d", &mianownik2);

    if(licznik1 == 0 || mianownik1 == 0 || licznik2 == 0 || mianownik2 == 0) {
        printf("Liczba nie może wynosić 0\n");
    }else {
        resLicznik = (licznik1 * mianownik2) + (licznik2 * mianownik1);
        resMianownik = mianownik1 * mianownik2;
    }


    int n = nwd(resLicznik, resMianownik);
    resLicznik /= n;
    resMianownik /= n;
    printf("Suma to %d/%d\n", resLicznik, resMianownik);
}
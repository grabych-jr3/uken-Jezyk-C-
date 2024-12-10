//
// Created by vgrab on 10.12.2024.
//

#include "z4.h"
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ulamek dodawanie(struct ulamek *u1, struct ulamek *u2) {
    struct ulamek u;
    u.licznik = u1->licznik * u2->mianownik + u2->licznik * u1->mianownik;
    u.mianownik = u1->mianownik * u2->mianownik;
    return u;
}

struct ulamek odejmowanie(struct ulamek *u1, struct ulamek *u2) {
    struct ulamek u;
    u.licznik = u1->licznik * u2->mianownik - u2->licznik * u1->mianownik;
    u.mianownik = u1->mianownik * u2->mianownik;
    return u;
}

struct ulamek mnozenie(struct ulamek *u1, struct ulamek *u2) {
    struct ulamek u;
    u.licznik = u1->licznik * u2->licznik;
    u.mianownik = u1->mianownik * u2->mianownik;
    return u;
}
struct ulamek dzielenie(struct ulamek *u1, struct ulamek *u2) {
    struct ulamek u;
    u.licznik = u1->licznik * u2->mianownik;
    u.mianownik = u1->mianownik * u2->licznik;
    return u;
}

void z4() {
    struct ulamek u1 = {4, 5};
    struct ulamek u2 = {6, 7};

    struct ulamek uDod = dodawanie(&u1, &u2);
    struct ulamek uOdej = odejmowanie(&u1, &u2);
    struct ulamek uMnoz = mnozenie(&u1, &u2);
    struct ulamek uDzielen = dzielenie(&u1, &u2);

    printf("Dodawanie: %d/%u\n", uDod.licznik, uDod.mianownik);
    printf("Dodawanie: %d/%u\n", uOdej.licznik, uOdej.mianownik);
    printf("Dodawanie: %d/%u\n", uMnoz.licznik, uMnoz.mianownik);
    printf("Dodawanie: %d/%u\n", uDzielen.licznik, uDzielen.mianownik);
}
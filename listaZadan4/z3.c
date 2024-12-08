//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z3.h"

int silnia(int x) {
    int S = 1;
    for (int i = 1; i <= x; i++) {
        S *= i;
    }
    return S;
}

void z3() {
    int wynik = silnia(5);
    printf("%d\n", wynik);
}
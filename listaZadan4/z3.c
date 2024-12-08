//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z3.h"

long long silnia(int n) {
    long long wynik = 1;
    for (int i = 2; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

// Funkcja wyznaczająca wartość symbolu Newtona (n nad k)
long long symbol_newtona(int n, int k) {
    if (k > n || k < 0) return 0;
    return silnia(n) / (silnia(k) * silnia(n - k));
}

void z3() {
    // Zadanie a)
    long long wynik_a = silnia(4) + silnia(6) - silnia(2);
    printf("Wynik wyrażenia 4! + 6! - 2! wynosi: %lld\n", wynik_a);

    // Zadanie b)
    int n = 5, k = 2;
    long long wynik_b = symbol_newtona(n, k);
    printf("Wynik symbolu Newtona dla n = %d i k = %d wynosi: %lld\n", n, k, wynik_b);

}
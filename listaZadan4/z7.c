//
// Created by vgrab on 08.12.2024.
//

#include <stdio.h>
#include "z7.h"

int get_number(int min, int max) {
    int liczba;
    while (1) { // Pętla nieskończona, która działa, dopóki nie zostanie podana poprawna liczba
        printf("Podaj liczbę z zakresu [%d, %d]: ", min, max);
        if (scanf("%d", &liczba) != 1) {
            // Obsługa błędu wejścia (np. podano tekst zamiast liczby)
            printf("To nie jest liczba całkowita. Spróbuj ponownie.\n");
            while (getchar() != '\n'); // Oczyszczenie bufora wejściowego
            continue;
        }

        if (liczba >= min && liczba <= max) {
            // Liczba jest w podanym zakresie
            return liczba;
        } else {
            printf("Liczba poza zakresem. Spróbuj ponownie.\n");
        }
    }
}

void z7() {
    int min = 10, max = 20;

    // Test funkcji get_number
    int wynik = get_number(min, max);

    printf("Podałeś liczbę: %d\n", wynik);
}
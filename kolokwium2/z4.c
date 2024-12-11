//
// Created by vgrab on 11.12.2024.
//

#include "z4.h"
#include <stdio.h>
#include <math.h>

unsigned f(struct kolo *p, unsigned n) {
    unsigned liczbaPar = 0;

    for (unsigned i = 0; i < n; i++) {
        for (unsigned j = i + 1; j < n; j++) {
            // Obliczenie odległości między środkami dwóch kół
            double dx = p[i].s.x - p[j].s.x;
            double dy = p[i].s.y - p[j].s.y;
            double odleglosc = sqrt(dx * dx + dy * dy);

            // Sprawdzenie, czy koła mają punkty wspólne
            if (odleglosc <= (p[i].r + p[j].r)) {
                liczbaPar++;
            }
        }
    }

    return liczbaPar;
}

void z4() {
    struct kolo k[5] = {
        {{1, 3}, 1},
        {{4, 0}, 6},
        {{8, 3}, 2},
        {{5, 9}, 3},
        {{9, 2}, 4}
    };

    unsigned liczbaPar = f(k, 5);
    printf("Liczba par kół mających wspólne punkty: %u\n", liczbaPar);
}
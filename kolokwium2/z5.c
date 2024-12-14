//
// Created by vgrab on 11.12.2024.
//

#include "z5.h"
#include <stdio.h>
#include <math.h>

void f5(struct kolo5 *p1, unsigned n1, struct kolo5 *p2, unsigned n2) {
    unsigned indeks_p2 = 0;
    for (unsigned i = 0; i < n1; i++) {
        float d = sqrt(p1[i].p.x * p1[i].p.x + p1[i].p.y * p1[i].p.y);
        if (d <= p1[i].r) {
            if (indeks_p2 < n2) {
                p2[indeks_p2] = p1[i];
                indeks_p2++;
            }else {
                break;
            }
        }
    }
}

void print_tab5(struct kolo5 *p1, unsigned n1) {
    for (unsigned i = 0; i < n1; i++) {
        printf("Kolo %d:\n", i + 1);
        printf("X = %.2lf, Y = %.2lf, R = %.2lf\n", p1[i].p.x, p1[i].p.y, p1[i].r);
    }
    printf("\n");
}

void z5() {
    struct kolo5 tab1[3] = {
        {{1, 3}, 1},
        {{4, 0}, 6},
        {{8, 3}, 2}
    };

    struct kolo5 tab2[3] = {
        {{5, 9}, 3},
        {{9, 2}, 4},
        {{-3, 2}, 1}
    };

    print_tab5(tab2, 3);
    f5(tab1, 3, tab2, 3);
    print_tab5(tab2, 3);
}
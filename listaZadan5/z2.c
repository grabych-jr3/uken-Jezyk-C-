//
// Created by vgrab on 08.12.2024.
//

#include "z2.h"
#include <stdio.h>

void printInReverseOrder(double arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%lf\t", arr[i]);
    }
}

void z2() {
    double tab[rozmiar] = {10.45, 9.5, 9, 2, 6.43, 0.6, 8.33, 1.5, 67.45, 3.25};
    printInReverseOrder(tab, rozmiar);
}
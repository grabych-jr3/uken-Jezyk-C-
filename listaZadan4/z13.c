//
// Created by vgrab on 08.12.2024.
//

#include "z13.h"
#include <stdio.h>

void przepisac(int n, int *p) {
    *p = n;
}

void z13() {
    int n = 10;
    int p;

    przepisac(n, &p);
    printf("%d\n", p);
}
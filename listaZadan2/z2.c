#include <stdio.h>
#include "z2.h"

void z2() {
    int a, b;

    printf("Podaj liczby: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("Liczba %d najwieksza\n", a);
    }else if(b > a) {
        printf("Liczba %d najwieksza\n", b);
    }else {
        printf("Liczby jednakowe \n");
    }

}
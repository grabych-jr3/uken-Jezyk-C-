#include <stdio.h>
#include "z3.h"

void z3() {
    unsigned long long num1;
    int ilosc = 0;

    printf("Podaj liczbe naturalna: ");
    scanf("%llu", &num1);

    do {
        num1 /= 10;
        ilosc++;
    }while(num1 != 0);

    printf("Liczba cyfr: %d\n", ilosc);
}
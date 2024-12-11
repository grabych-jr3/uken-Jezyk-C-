#include <stdio.h>
#include "z2.h"

void z2() {
    int num1, num2, step;
    printf("Podaj liczbe poczatkowa: ");
    scanf("%d", &num1);
    printf("Podaj liczbe koncowa: ");
    scanf("%d", &num2);
    printf("Podaj wielkosc odstepu: ");
    scanf("%d", &step);

    while(num1 <= num2) {
        printf("%d, ", num1);
        num1 += step;
    }
}
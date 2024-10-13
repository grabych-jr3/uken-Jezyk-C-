#include <stdio.h>
#include "z8.h"

void z8() {
    int year;
    printf("Podaj rok :");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("Rok jest przestepny\n");
    }else {
        printf("Rok nie jest przestepny\n");
    }
}
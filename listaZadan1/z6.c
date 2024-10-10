#include <stdio.h>
#include "z6.h"

void z6() {
    char znak;

    printf("Podaj dowolny znak: ");
    scanf("%c", &znak);

    printf("Kod ASCII znaku '%c' to: %d\n", znak, znak);
}
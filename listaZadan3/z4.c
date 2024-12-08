#include <stdio.h>
#include "z4.h"

void z4() {
    int num;
    printf("Podaj liczbe: ");
    scanf("%d", &num);

    int liczba = iloscJedynek(num);
    printf("Liczba: %d\n", liczba);
}

int iloscJedynek(int num) {
    int liczba = 0;
    while(num != 0) {
        if(num % 2 == 1) {
            liczba++;
        }
        num /= 2;
    }
    return liczba;
}
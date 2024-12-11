#include <stdio.h>
#include "z1.h"

void z1() {
    int num;
    printf("Podaj liczbe: ");
    scanf("%d", &num);

    int i = 0;
    while(i < 10) {
        printf("%d\n", ++num);
        i++;
    }
}
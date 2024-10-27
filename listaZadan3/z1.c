#include <stdio.h>
#include "z1.h"

void z1() {
    int num;
    printf("Podaj liczbe: ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++) {
        printf("%d\n", ++num);
    }
}
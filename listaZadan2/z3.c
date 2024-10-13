#include <stdio.h>
#include "z3.h"

void z3() {
    int a, b, x;

    printf("Podaj liczby a i b: ");
    scanf("%d %d", &a, &b);

    if(a == 0) {
        if(b == 0) {
            printf("Nieskonczenie wiele rozwiazan");
        }else {
            printf("Rownanie sprzeczne");
        }
    }else {
        x = -b / a;
        printf("x = %d", x);
    }
}
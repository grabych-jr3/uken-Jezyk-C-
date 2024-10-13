#include <stdio.h>
#include "z5.h"

void z5() {
    int V;
    printf("Podaj predkosc wiatru: ");
    scanf("%d", &V);

    if (V < 0) {
        printf("Wiatr nie moze byc ujemny\n");
        return;
    }

    if (V < 1) {
        printf("Cisza\n");
    }else if(V >= 1 && V <= 3) {
        printf("Zefir\n");
    }else if(V >= 4 && V <= 27) {
        printf("Bryza\n");
    }else if(V >= 28 && V <= 47) {
        printf("Wichura\n");
    }else if(V >= 48 && V <= 63) {
        printf("Sztorm\n");
    }else {
        printf("Huragan\n");
    }
}
#include <stdio.h>
#include "z4.h"
#include <math.h>

void z4() {
    float a, b, c, x1, x2;
    float D;

    printf("Podaj liczby: ");
    scanf("%f %f %f", &a, &b, &c);

    D = pow(b, 2) - 4 * a * c;
    if(D < 0) {
        printf("Rownanie nie ma pierwiastkow");
    }else if(D == 0) {
        x1 = -b / (2 * a);
        printf("X1 = %.3f\n", x1);
    }else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("X1 = %.3f, X2 = %.3f\n", x1, x2);
    }
}
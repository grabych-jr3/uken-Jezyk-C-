#include <stdio.h>
#include <math.h>
#include "z8.h"

void z8() {
    double S, V;
    double pi = 3.14159;
    int R;

    printf("Podaj promien kuli: ");
    scanf("%d", &R);

    S = 4 * pi * pow(R, 2);
    V = (4 * pi * pow(R, 3)) / 3;

    printf("Pole = %f\n", S);
    printf("Objetnosc = %f\n", V);
}
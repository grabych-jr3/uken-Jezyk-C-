#include <stdio.h>
#include "z11.h"

void z11() {
    char zmiennaChar;
    int zmiennaInt;
    float zmiennaFloat;
    double zmiennaDouble;

    printf("Rozmiar typu char: %zu bajtow\n", sizeof(zmiennaChar));
    printf("Rozmiar typu int: %zu bajtow\n", sizeof(zmiennaInt));
    printf("Rozmiar typu float: %zu bajtow\n", sizeof(zmiennaFloat));
    printf("Rozmiar typu double: %zu bajtow\n", sizeof(zmiennaDouble));
}
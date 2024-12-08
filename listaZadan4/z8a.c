//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z8a.h"

void z8a() {
    char znak = 'A';
    int liczba = 1;
    float zmiennopozycyjna = 3.14f;
    double zmiennopozycyjna_podwojna = 2.71828;

    printf("Zmienna znak: wartosc = %c, adres = %p\n", znak, (void*)&znak);
    printf("Zmienna liczba: wartosc = %d, adres = %p\n", liczba, (void*)&liczba);
    printf("Zmienna zmiennopozycyjna: wartosc = %f, adres = %p\n", zmiennopozycyjna, (void*)&zmiennopozycyjna);
    printf("Zmienna zmiennopozycyjna_podwojna: wartosc = %lf, adres = %p\n", zmiennopozycyjna_podwojna, (void*)&zmiennopozycyjna_podwojna);
}
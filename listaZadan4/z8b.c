//
// Created by vgrab on 08.12.2024.
//
#include <stdio.h>
#include "z8b.h"

void z8b() {
    char znak = 'A';
    int liczba = 42;
    float zmiennopozycyjna = 3.14f;
    double zmiennopozycyjna_podwojna = 2.71828;

    char *ptr_znak = &znak;
    int *ptr_liczba = &liczba;
    float *ptr_zmiennopozycyjna = &zmiennopozycyjna;
    double *ptr_zmiennopozycyjna_podwojna = &zmiennopozycyjna_podwojna;

    printf("Zmienna znak: wartość = %c, adres = %p\n", *ptr_znak, (void*)ptr_znak);
    printf("Zmienna liczba: wartość = %d, adres = %p\n", *ptr_liczba, (void*)ptr_liczba);
    printf("Zmienna zmiennopozycyjna: wartość = %f, adres = %p\n", *ptr_zmiennopozycyjna, (void*)ptr_zmiennopozycyjna);
    printf("Zmienna zmiennopozycyjna_podwojna: wartość = %lf, adres = %p\n", *ptr_zmiennopozycyjna_podwojna, (void*)ptr_zmiennopozycyjna_podwojna);
}
#ifndef Z2_H
#define Z2_H

struct student {
    char imie[50];
    int wiek;
    float sredniaOcena;
};

void dodajStudenta(struct student *, int n);
void wyswietlStudentow(struct student *, int n);
struct student *znajdzNajlepszegoStudenta(struct student *, int n);

void z2();

#endif //Z2_H

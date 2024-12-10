//
// Created by vgrab on 10.12.2024.
//

#ifndef Z6_H
#define Z6_H

struct student {
    char imie[15];
    char nazwisko[15];
    int rok;
    char kierunek[20];
    int oceny[5];
};

void wypisz(struct student *, int n);
void calculateAverageGrades(struct student *, int, float *);
void printTopStudent(struct student *, int, float *);

void z6();

#endif //Z6_H

//
// Created by vgrab on 10.12.2024.
//

#ifndef Z7_H
#define Z7_H

struct samochod {
    char marka[20];
    char model[20];
    int rok;
    float cena;
};

void najdrozszy(struct samochod *, int);
void najmlodszy(struct samochod *, int);
float sredniaCena(struct samochod *, int);
void z7();

#endif //Z7_H

//
// Created by vgrab on 11.12.2024.
//

#ifndef Z1_H
#define Z1_H

struct ulamek {
    int licznik;
    unsigned mianownik;
};

void sortowanie(struct ulamek *, int);
void print_tab(struct ulamek *tab, int n);
int nwd(int, unsigned);
void uproscWszystkieUlamki(struct ulamek *, int);

void z1();

#endif //Z1_H

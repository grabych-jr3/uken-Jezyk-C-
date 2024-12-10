//
// Created by vgrab on 10.12.2024.
//

#ifndef Z4_H
#define Z4_H

struct ulamek {
    int licznik;
    unsigned mianownik;
};

int gcd(int, int);
struct ulamek dodawanie(struct ulamek *, struct ulamek *);
struct ulamek odejmowanie(struct ulamek *, struct ulamek *);
struct ulamek mnozenie(struct ulamek *, struct ulamek *);
struct ulamek dzielenie(struct ulamek *, struct ulamek *);

void z4();

#endif //Z4_H

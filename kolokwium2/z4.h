//
// Created by vgrab on 11.12.2024.
//

#ifndef Z4_H
#define Z4_H

struct punkt {
    double x, y;
};

struct kolo {
    struct punkt s; // środek
    double r;       // promień
};

unsigned f(struct kolo *, unsigned);

void z4();

#endif //Z4_H

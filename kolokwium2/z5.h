//
// Created by vgrab on 11.12.2024.
//

#ifndef Z5_H
#define Z5_H

struct punkt5 {
    double x, y;
};
struct kolo5 {
    struct punkt5 p;
    double r;
};

void print_tab5(struct kolo5 *, unsigned);
void f5(struct kolo5 *, unsigned, struct kolo5 *, unsigned);

void z5();

#endif //Z5_H

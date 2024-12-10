//
// Created by vgrab on 10.12.2024.
//

#include "z5.h"
#include <stdio.h>

int f5_1(struct punkt *p) {
    if (p->y > 0) {
        return 1;
    }else {
        return 0;
    }
}

void f5_2(struct punkt *p) {
    p->y *= -1;
}

void f5_3(struct punkt *p) {
    p->x *= -1;
    p->y *= -1;
}

int f5_4(struct punkt *tab, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        printf("Podaj wspolrzedne punktu %d (x y): ", i + 1);
        scanf("%f %f", &tab[i].x, &tab[i].y);
        if (f5_1(&tab[i])) {
            count++;
        }
    }
    return count;
}

void f5_5(struct punkt *tab, int n) {
    int kwadrat1 = 0, kwadrat2 = 0, kwadrat3 = 0, kwadrat4 = 0, osi = 0;
    for (int i = 0; i < n; i++) {
        printf("Podaj wspolrzedne punktu %d (x y): ", i + 1);
        scanf("%f %f", &tab[i].x, &tab[i].y);
    }

    for (int i = 0; i < n; i++) {
        if (tab[i].x > 0 && tab[i].y > 0) {
            kwadrat1++;
        }else if (tab[i].x < 0 && tab[i].y > 0) {
            kwadrat2++;
        }else if (tab[i].x < 0 && tab[i].y < 0) {
            kwadrat3++;
        }else if (tab[i].x > 0 && tab[i].y < 0) {
            kwadrat4++;
        }else {
            osi++;
        }
    }

    printf("W pierwszym kwadracie: %d\n", kwadrat1);
    printf("W drugim kwadracie: %d\n", kwadrat2);
    printf("W trzecim kwadracie: %d\n", kwadrat3);
    printf("W czwartym kwadracie: %d\n", kwadrat4);
    printf("Na osiach: %d\n", osi);
}

void z5() {
    struct punkt p1 = {5, 6};

    printf("Function 1: %d\n", f5_1(&p1));

    f5_2(&p1);
    printf("Function 2: (%d; %d)\n", p1.x, p1.y);

    f5_3(&p1);
    printf("Function 3: (%d; %d)\n", p1.x, p1.y);

    struct punkt tab[5];
    printf("Function 4: %d\n", f5_4(tab, 5));

    struct punkt tab2[5];
    f5_5(tab2, 5);
}
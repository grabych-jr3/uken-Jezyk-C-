#include <stdio.h>
#include "z5For.h"

void z5For() {
    int n;
    printf("Podaj liczbe n (n > 1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Liczba n musi byc wieksza od 1.\n");
        return;
    }

    aFor(n);
    bFor(n);
    cFor(n);
    dFor(n);
    eFor(n);
    fFor();
    gFor(n);
    hFor();
    iFor();
    jFor(n);
    kFor(n);
    lFor(n);
    mFor(n);
}

void aFor(int n) {
    printf("a)Liczby od 1 do n: ");
    for (int i = 1; i <= n; i++) {
        printf("%d; ", i);
    }
    printf("\n");
}

void bFor(int n) {
    printf("b)Liczby od n do 1: ");
    for (int i = n; i >= 1; i--) {
        printf("%d; ", i);
    }
    printf("\n");
}

void cFor(int n) {
    printf("c)Parzyste liczby od n do 1: ");
    for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d; ", i);
        }
    }
    printf("\n");
}

void dFor(int n) {
    printf("d)Nieparzyste liczby od 1 do n: ");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d; ", i);
        }
    }
    printf("\n");
}

void eFor(int n) {
    printf("e)Kolejne wyrazy ciagu arytmetycznego(1, 4, 7...): ");
    for (int i = 1; i <= n; i += 3) {
        printf("%d; ", i);
    }
    printf("\n");
}

void fFor() {
    int n = 12;
    unsigned long long silnia = 1;
    printf("f)Pierwsze 12 silni liczb naturalnych:\n");

    for (int i = 1; i <= n; i++) {
        silnia *= i;
        printf("%d! = %llu\n", i, silnia);
    }
    printf("\n");
}

void gFor(int n) {
    printf("g)Pierwsze %d wyrazow ciagu a_n = 1/n:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("a_%d = %.5f\n", i, 1.0 / i);
    }
    printf("\n");
}

void hFor() {
    int n = 17;
    int a = 3;
    printf("h)Pierwsze 17 wyrazow ciagu:\n");

    for (int i = 1; i <= n; i++) {
        printf("a_%d = %d\n", i, a);
        a = 3 * a - 4;
    }
    printf("\n");
}

void iFor() {
    int n = 31;
    unsigned long long a = 0;

    printf("i)Pierwsze 31 wyrazow ciagu:\n");
    for (int i = 0; i <= n; i++) {
        printf("a_%d = %llu\n", i, a);
        a = 2 * a + 1;
    }
    printf("\n");
}

void jFor(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("j)Suma pierwszych %d liczb naturalnych wynosi: %d\n", n, sum);
    printf("\n");
}

void kFor(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("k)Suma kwadratow pierwszych %d liczb naturalnych wynosi: %d\n", n, sum);
    printf("\n");
}

void lFor(int n) {
    int liczba;
    int parzyste = 0, nieparzyste = 0;

    for (int i = 1; i <= n; i++) {
        printf("l)Podaj liczbe %d: ", i);
        scanf("%d", &liczba);

        if (liczba % 2 == 0) {
            parzyste++;
        } else {
            nieparzyste++;
        }
    }

    printf("Liczb parzystych: %d\n", parzyste);
    printf("Liczb nieparzystych: %d\n", nieparzyste);
    printf("\n");
}

void mFor(int n) {
    int liczba, dodatnie = 0, ujemne = 0;

    printf("m)Podaj %d liczb calkowitych:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczba);

        if (liczba > 0) {
            dodatnie++;
        } else if (liczba < 0) {
            ujemne++;
        }
    }

    printf("Ilosc liczb dodatnich: %d\n", dodatnie);
    printf("Ilosc liczb ujemnych: %d\n", ujemne);
    printf("\n");
}
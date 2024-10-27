#include <stdio.h>
#include "z5.h"

void z5() {
    int n;
    printf("Podaj liczbe n (n > 1): ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Liczba n musi byc wieksza od 1.\n");
        return;
    }

    a(n);
    b(n);
    c(n);
    d(n);
    e(n);
    f();
    g(n);
    h();
    i();
    j(n);
    k(n);
    l(n);
    m(n);
}

void a(int n) {
    int i = 1;
    printf("a)Liczby od 1 do n: ");
    while (i <= n) {
        printf("%d; ", i);
        i++;
    }
    printf("\n");
}

void b(int n) {
    int i = 1;
    printf("b)Liczby od n do 1: ");
    while (n >= i) {
        printf("%d; ", n);
        n--;
    }
    printf("\n");
}

void c(int n) {
    int i = 1;
    printf("c)Parzyste liczby od n do 1: ");
    while (n >= i) {
        if(n % 2 == 0) {
            printf("%d; ", n);
        }
        n--;
    }
    printf("\n");
}

void d(int n) {
    int i = 1;
    printf("d)Nieparzyste liczby od 1 do n: ");
    while (i <= n) {
        if(i % 2 == 1) {
            printf("%d; ", i);
        }
        i++;
    }
    printf("\n");
}

void e(int n) {
    int i = 1;
    printf("e)Kolejne wyrazy ciagu arytmetycznego(1, 4, 7...): ");
    while(i <= n) {
        printf("%d; ", i);
        i+=3;
    }
    printf("\n");
}

void f() {
    int n = 12;
    int i = 1;
    unsigned long long silnia = 1;
    printf("f)Pierwsze 12 silni liczb naturalnych:\n");

    while (i <= n) {
        silnia *= i;
        printf("%d! = %llu\n", i, silnia);
        i++;
    }
    printf("\n");
}

void g(int n) {
    int i = 1;
    printf("f)Pierwsze %d wyrazow ciagu a_n = 1/n:\n", n);
    while (i <= n) {
        printf("a_%d = %.5f\n", i, 1.0 / i);
        i++;
    }
    printf("\n");
}

void h() {
    int n = 17;
    int i = 1;
    int a = 3;
    printf("h)Pierwsze 17 wyrazow ciagu:\n");

    printf("a_%d = %d\n", i, a);
    while (i < n) {
        a = 3 * a - 4;
        i++;
        printf("a_%d = %d\n", i, a);
    }
    printf("\n");
}

void i() {
    int n = 31;
    int i = 0;
    unsigned long long a = 0;

    printf("i)Pierwsze 31 wyrazow ciagu:\n");


    printf("a_%d = %llu\n", i, a);


    while (i < n) {
        i++;
        a = 2 * a + 1;
        printf("a_%d = %llu\n", i, a);
    }


    a = 2 * a + 1;
    printf("a_32 = %llu\n", a);
    printf("\n");
}

void j(int n) {
    int i = 1;
    int sum = 0;

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("j)Suma pierwszych %d liczb naturalnych wynosi: %d\n", n, sum);
    printf("\n");
}

void k(int n) {
    int sum = 0, i = 1;
    while (i <= n) {
        sum += i * i;
        i++;
    }

    printf("k)Suma kwadratow pierwszych %d liczb naturalnych wynosi: %d\n", n, sum);
    printf("\n");
}

void l(int n) {
    int liczba, i = 1;
    int parzyste = 0, nieparzyste = 0;

    while (i <= n) {
        printf("l)Podaj liczbe %d: ", i);
        scanf("%d", &liczba);

        // Перевірка на парність
        if (liczba % 2 == 0) {
            parzyste++;
        } else {
            nieparzyste++;
        }
        i++;
    }

    // Виведення результатів
    printf("Liczb parzystych: %d\n", parzyste);
    printf("Liczb nieparzystych: %d\n", nieparzyste);
    printf("\n");
}

void m(int n) {
    int liczba, dodatnie = 0, ujemne = 0, i = 0;
    printf("m)Podaj %d liczb calkowitych:\n", n);

    while (i < n) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczba);

        if (liczba > 0) {
            dodatnie++;
        } else if (liczba < 0) {
            ujemne++;
        }

        i++;
    }

    printf("Ilosc liczb dodatnich: %d\n", dodatnie);
    printf("Ilosc liczb ujemnych: %d\n", ujemne);
    printf("\n");
}
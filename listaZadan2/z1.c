#include <stdio.h>
#include "z1.h"

#include <stdarg.h>

void z1(){
    int a = 0, b = 0, c = 0, z, isEmpty = 1;

    if(a > b && a > c) {
        z = a;
        isEmpty = 0;
    }else if(b > a && b > c) {
        z = b;
        isEmpty = 0;
    }else if(c > a && c > b) {
        z = c;
        isEmpty = 0;
    }else {
        printf("Liczby sa rowne\n");
    }

    if(!isEmpty) {
        printf("Najwieksza liczba: %d\n", z);
    }


    int num1 = -2, num2 = -3, sum1 = 0;
    if(num1 < 0 && num2 < 0) {
        sum1 = num1 + num2;
        printf("Suma: %d\n", sum1);
    }else {
        printf("Liczby nie sa ujemne\n");
    }

    int num3 = 0, num4 = 0, sum2 = 0;
    if(num3 > 0 && num4 > 0) {
        sum2 = num3 + num4;
    }else if(num3 < 0 && num4 < 0) {
        sum2 = num3 + num4;
    }else {
        printf("licby rowna sie 0\n");
    }
    printf("Suma: %d\n", sum2);
}

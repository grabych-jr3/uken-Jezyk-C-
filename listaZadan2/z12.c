#include <stdio.h>
#include <ctype.h>
#include "z12.h"

void z12() {
    char symbol;
    printf("Podaj znak: ");
    scanf("%c", &symbol);

    if(isalpha(symbol)) {
        printf("To jest litera\n");
    }else if(isdigit(symbol)) {
        printf("To jest cyfra\n");
    }else {
        printf("To jest znak specjalnyf\n");
    }
}
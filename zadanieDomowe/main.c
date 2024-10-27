#include <stdio.h>

int main(void) {
    int liczba, temp, cyfra, suma = 0, maxCyfra = 0, licznik = 0;
    int cyfry[10];

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    temp = liczba;

    while(temp != 0) {
        cyfra = temp % 10;
        cyfry[licznik] = cyfra;
        suma += cyfra;
        if(cyfra > maxCyfra) {
            maxCyfra = cyfra;
        }
        licznik++;
        temp /= 10;
    }

    printf("Liczba cyfr: %d\n", licznik);
    printf("Suma: %d\n", suma);
    printf("Max cyfra: %d\n", maxCyfra);

    printf("Cyfry: ");
    for (int i = licznik - 1; i >= 0; i--) {
        printf("%d ", cyfry[i]);
    }

    return 0;
}

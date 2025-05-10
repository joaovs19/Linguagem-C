/*2. Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que divididos por 11 onde o resto da divisão é igual a 5.*/
#include <stdio.h>

int main() {
    int numero = 1000;

    while (numero <= 1999) {
        if (numero % 11 == 5) {
            printf("%d\n", numero);
        }
        numero++;
    }

    return 0;
}

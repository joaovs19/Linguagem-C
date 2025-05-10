//11. Fazer um programa em C que imprima os números perfeitos no intervalo de 1 a 1000.
#include <stdio.h>

int main() {
    int num, soma, i;

    for (num = 1; num <= 1000; num++) {
        soma = 0;
        i = 1;

        do {
            if (num % i == 0) {
                soma += i;  
            }
            i++;
        } while (i < num); 

        if (soma == num) {
            printf("%d eh um numero perfeito.\n", num);
        }
    }

    return 0;
}

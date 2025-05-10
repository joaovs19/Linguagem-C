/*3. Escrever um programa que lê um número não conhecido de valores, um de cada vez, e conta
quantos deles estão em cada um dos intervalos: [0-24], [25-50] e fora deste intervalo.*/
#include <stdio.h>

int main() {
    int numero;
    int faixa1 = 0; 
    int faixa2 = 0; 
    int fora = 0;   

    printf("Digite numeros inteiros (negativo para encerrar):\n");

    while (1) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        if (numero >= 0 && numero <= 24) {
            faixa1++;
        } else if (numero >= 25 && numero <= 50) {
            faixa2++;
        } else {
            fora++;
        }
    }

    printf("\nQuantidade na faixa [0-24]: %d\n", faixa1);
    printf("Quantidade na faixa [25-50]: %d\n", faixa2);
    printf("Quantidade fora das faixas: %d\n", fora);

    return 0;
}

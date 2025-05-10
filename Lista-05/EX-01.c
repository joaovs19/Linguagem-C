/*1. Escrever um programa que leia 8 valores inteiro positivo, um de cada vez, e encontre e escreve o maior deles.*/

#include <stdio.h>

int main() {
    int contador = 0;
    int numero, maior;

    // Lê o primeiro número para iniciar o maior
    printf("Digite um número inteiro positivo (1 de 8): ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("Por favor, digite apenas números positivos: ");
        scanf("%d", &numero);
    }

    maior = numero;
    contador = 1;

    // Continua lendo os próximos 7 números
    while (contador < 8) {
        printf("Digite um número inteiro positivo (%d de 8): ", contador + 1);
        scanf("%d", &numero);

        while (numero <= 0) {
            printf("Por favor, digite apenas números positivos: ");
            scanf("%d", &numero);
        }

        if (numero > maior) {
            maior = numero;
        }

        contador++;
    }

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}

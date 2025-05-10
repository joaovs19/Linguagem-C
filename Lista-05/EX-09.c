//9. Escreva um programa que calcule e apresente a série de fibonacci. A quantidade de termos a serem apresentados devem ser informados pelo usuário. Apresente também a somatória de todos os termos exibidos pela série de fibonacci solicitada. Série de Fibonacci = “1, 1, 2, 3, 5, 8, 13, 21, 34, 55” 
#include <stdio.h>

int main() {
    int n, i = 2;
    int a = 1, b = 1, prox;
    int soma;

    printf("Digite a quantidade de termos da série de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida. Informe um valor positivo.\n");
        return 1;
    }

    printf("Série de Fibonacci: ");

    if (n == 1) {
        printf("1\n");
        soma = 1;
    } else {
        printf("1, 1");
        soma = 2;

        while (i < n) {
            prox = a + b;
            printf(", %d", prox);
            soma += prox;

            a = b;
            b = prox;
            i++;
        }
        printf("\n");
    }

    printf("Somatório dos termos: %d\n", soma);

    return 0;
}

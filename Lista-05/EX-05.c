//5. Escreva um programa que realize o cálculo do fatorial de um número inteiro e positivo informado pelo usuário.
#include <stdio.h>

int main() {
    int num, fatorial = 1;
    
    // Solicita o número ao usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    // Verifica se o número é positivo
    if (num < 0) {
        printf("Número inválido. Informe um número inteiro positivo.\n");
        return 1;
    }

    int i = 1;
    while (i <= num) {
        fatorial *= i;
        i++;
    }

    printf("Fatorial de %d é %d\n", num, fatorial);

    return 0;
}

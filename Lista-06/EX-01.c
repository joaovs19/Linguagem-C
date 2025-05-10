//1. Escrever um programa que lê 5 conjuntos de 2 valores, o primeiro representando o número de umaluno e o segundo representando a sua altura em centímetros. Encontrar o aluno mais alto e o mais baixo e escrever seus números, suas alturas e uma mensagem dizendo se é o mais alto ou o mais baixo.
#include <stdio.h>

int main() {
    int i = 0;
    int numero, num_mais_alto, num_mais_baixo;
    int altura, altura_mais_alto, altura_mais_baixo;

    do {
        printf("Digite o numero do aluno %d: ", i + 1);
        scanf("%d", &numero);

        printf("Digite a altura do aluno %d (em cm): ", i + 1);
        scanf("%d", &altura);

        if (i == 0) {
            altura_mais_alto = altura_mais_baixo = altura;
            num_mais_alto = num_mais_baixo = numero;
        } else {
            if (altura > altura_mais_alto) {
                altura_mais_alto = altura;
                num_mais_alto = numero;
            }
            if (altura < altura_mais_baixo) {
                altura_mais_baixo = altura;
                num_mais_baixo = numero;
            }
        }

        i++;
    } while (i < 5);

    printf("\nAluno mais alto:\n");
    printf("Numero: %d\n", num_mais_alto);
    printf("Altura: %d cm\n", altura_mais_alto);
    printf("-> ESSE E O MAIS ALTO!\n");

    printf("\nAluno mais baixo:\n");
    printf("Numero: %d\n", num_mais_baixo);
    printf("Altura: %d cm\n", altura_mais_baixo);
    printf("-> ESSE E O MAIS BAIXO!\n");

    return 0;
}

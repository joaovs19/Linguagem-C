//9. Escrever um programa que lê o número de identificação, as 3 notas obtidas por um aluno em provas e a média dos exercícios (ME) que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula: MA = (Nota1 + Nota2 × 2 + Nota3 × 3 + ME) ∕ 7 A atribuição de conceitos obedece a tabela abaixo: O programa deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E. 
#include <stdio.h>

int main() {
    int NUM;
    float NOTA1, NOTA2, NOTA3, ME, MEDIA;
    char CONCEITO;

    printf("Digite o número de identificação do aluno: ");
    scanf("%d", &NUM);

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &NOTA1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &NOTA2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &NOTA3);

    printf("Digite a média dos exercícios: ");
    scanf("%f", &ME);

    MEDIA = (NOTA1 + NOTA2 * 2 + NOTA3 * 3 + ME) / 7;

    if (MEDIA >= 9) {
        CONCEITO = 'A';
    } else if (MEDIA >= 7.5) {
        CONCEITO = 'B';
    } else if (MEDIA >= 6) {
        CONCEITO = 'C';
    } else if (MEDIA >= 4) {
        CONCEITO = 'D';
    } else {
        CONCEITO = 'E';
    }

    printf("\nNúmero de identificação: %d\n", NUM);
    printf("Notas: %.2f, %.2f, %.2f\n", NOTA1, NOTA2, NOTA3);
    printf("Média dos exercícios: %.2f\n", ME);
    printf("Média final: %.2f\n", MEDIA);
    printf("Conceito: %c\n", CONCEITO);

    if (CONCEITO == 'A' || CONCEITO == 'B' || CONCEITO == 'C') {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}

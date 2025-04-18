//Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maiorou igual a 5 e "REPROVADO" se a média for menor que 5.
#include <stdio.h>

int main(){

    int CODIGO;
    float N1, N2, N3, MEDIA;
    float MAIOR, pesoMaior = 4, pesoOutras = 3;

    printf("Informe o codigo do aluno: ");
    scanf("%d", &CODIGO);

    printf("Informe as tres notas do aluno: ");
    scanf("%f %f %f", &N1, &N2, &N3);

    MAIOR = N1;
    if (N2 > MAIOR){
        MAIOR = N2;
    }
    if (N3 > MAIOR){
        MAIOR = N3;
    }

    if (MAIOR == N1){
        MEDIA = (N1 * pesoMaior + N2 * pesoOutras + N3 * pesoOutras) / (pesoMaior + 2 * pesoOutras);
    } else if (MAIOR == N2){
        MEDIA = (N2 * pesoMaior + N1 * pesoOutras + N3 * pesoOutras) / (pesoMaior + 2 * pesoOutras);
    } else {
        MEDIA = (N3 * pesoMaior + N1 * pesoOutras + N2 * pesoOutras) / (pesoMaior + 2 * pesoOutras);
    }

    printf("\nCodigo do aluno: %d\n", CODIGO);
    printf("Notas: %.2f, %.2f, %.2f\n", N1, N2, N3);
    printf("Media ponderada: %.2f\n", MEDIA);

    if (MEDIA >= 5){
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}
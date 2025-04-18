//Escrever um programa para ler 4 valores, calcular e mostrar a média ponderada obtida por um aluno para 2 notas bimestrais. Note que desses 4 valores lidos tem-se o seguinte: duas notas e os dois respectivos pesos das notas (pesquise a fórmula da média ponderada).
#include <stdio.h>

int main(){
    float N1, N2, P1, P2, MEDIA;

    printf("Informe a primeira nota: ");
    scanf("%f", &N1);

    printf("Informe o peso da primeira nota: ");
    scanf("%f", &P1);

    printf("Informe a segunda nota: ");
    scanf("%f", &N2);

    printf("Informe o peso da segunda nota: ");
    scanf("%f", &P2);

    MEDIA = (N1 * P1 + N2 * P2) / (P1 + P2);

    printf("A media pondereda igual: %2.f ", MEDIA);

    return 0;

}
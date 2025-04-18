//Tendo como dados de entrada a altura e o sexo de uma pessoa (1- masculino e 0 - feminino), construa um programa que calcule seu peso ideal, utilizando as seguintes fórmulas: - para homens: (72.7*h)-58 - para mulheres: (62.1*h)-44.7
#include <stdio.h>

int main(){
    int SEXO;
    float ALTURA, PESO;

    printf("Informe sua altura: ");
    scanf("%f",&ALTURA);

    printf("Digite o sexo: 1 para masculino ou 0 para feminino");
    scanf("%d", &SEXO);

    if (SEXO == 1) {
        PESO = (72.7 * ALTURA) - 58;
        printf("O peso ideal para quem tem %.2f m de altura é %.2f kg\n", ALTURA, PESO);
    } else if (SEXO == 0) {
        PESO = (62.1 * ALTURA) - 44.7;
        printf("O peso ideal para quem tem %.2f m de altura (feminino) é %.2f kg\n", ALTURA, PESO);
    } else {
        printf("Sexo inválido. Use 1 para masculino ou 0 para feminino.\n");
    }

    return 0;
}
//A empresa Xing Ling SA decidiu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo: Salário Atual Índice De Aumento 0 – 1000,00 15% 1000,01 – 1500,00 12% 1500,01 – 1800,00 10% 1800,01 - 2000,00 7% 2000,01 – 2500,00 4% acima de 2500,00 Sem aumento Escrever um algoritmo que lê, para cada funcionário, o seu número e o seu salário atual e escreve o número do funcionário, seu salário atual, o percentual de seu aumento e o valor do salário corrigido. 
#include <stdio.h>

int main() {
    int NUM_FUNC;
    float SALARIO_ATUAL, SALARIO_NOVO, AUMENTO;
    float PERCENTUAL;

    printf("Digite o numero do funcionario: ");
    scanf("%d", &NUM_FUNC);

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &SALARIO_ATUAL);

    if (SALARIO_ATUAL <= 1000.00) {
        PERCENTUAL = 15;
    } else if (SALARIO_ATUAL <= 1500.00) {
        PERCENTUAL = 12;
    } else if (SALARIO_ATUAL <= 1800.00) {
        PERCENTUAL = 10;
    } else if (SALARIO_ATUAL <= 2000.00) {
        PERCENTUAL = 7;
    } else if (SALARIO_ATUAL <= 2500.00) {
        PERCENTUAL = 4;
    } else {
        PERCENTUAL = 0;
    }

    AUMENTO = SALARIO_ATUAL * (PERCENTUAL / 100);
    SALARIO_NOVO = SALARIO_ATUAL + AUMENTO;

    printf("\nNumero do funcionario: %d\n", NUM_FUNC);
    printf("Salario atual: R$ %.2f\n", SALARIO_ATUAL);
    printf("Percentual de aumento: %.0f%%\n", PERCENTUAL);
    printf("Salario corrigido: R$ %.2f\n", SALARIO_NOVO);

    return 0;
}
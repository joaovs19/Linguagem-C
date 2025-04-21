//Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa. Para isso o usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. Apresente o valor convertido. 
#include <stdio.h>

int main(){
    char opcao;
    float cotacao, valor, conversao;

    printf("Informe qual moeda quer converter:\n");
    printf("A - Real para Dolar\n");
    printf("B - Dolar para Real\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    switch (opcao){
        case 'A':
        case 'a':
            printf("Informe o valor em Real: \n");
            scanf("%f", &valor);
            printf("Informe a cotacao do Dolar: ");
            scanf("%f", &cotacao);

            conversao = valor / cotacao;

            printf("Valor em Dolar: %.2f", conversao);
            break;

        case 'B':
        case 'b':
            printf("Informe o valor em Dolar: \n");
            scanf("%f", &valor);
            printf("Informe a cotacao do Real: ");
            scanf("%f", &cotacao);

            conversao = valor * cotacao;

            printf("Valor em Real: %.2f", conversao);
            break;

        default:
            printf("Informe uma opcao valida!");
            break;
    }
    return 0;
}
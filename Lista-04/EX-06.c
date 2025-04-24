/*6. Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa. Para isso o 
usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. Apresente o 
valor convertido. Para realizar as conversões utilize funções especificas. */
#include <stdio.h>

float realParaDolar(float valor, float cotacao){
    return valor / cotacao;
}

float dolarParaReal(float valor, float cotacao){
    return valor * cotacao;
}

int main(){
    float valor, cotacao, convertido;
    char moeda;

    printf("Informe o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Informe a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("informe a moeda de origem (R) para real ou (D) para dolar: ");
    scanf(" %c", &moeda);

    switch(moeda){
        case 'R':
        case 'r':
            convertido = realParaDolar(valor , cotacao);
            printf("Valor em dolar: %.2f\n", convertido);
            break;
        
        case 'D':
        case 'd':
            convertido = dolarParaReal(valor, cotacao);
            printf("Valor em real: %.2f\n", convertido);
            break;
        
        default:
            printf("Moeda invalida\n");
            break;
    }

    return 0;
}
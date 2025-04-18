//Faça um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.
#include <stdio.h>

int main(){
    int NUM;

    printf("Informe o numero: ");
    scanf("%d", &NUM);

    if(NUM % 2== 0){
        printf("O numero %d igual a PAR\n", NUM);
    } else {
        printf("O numero %d igual a IMPAR\n", NUM);
    }

    if (NUM > 0){
        printf("O numero %d igual a POSTIVO\n", NUM);
    } else if (NUM < 0){
        printf("O numero %d igual a NEGATIVO\n", NUM);
    } else {
        printf("O numero igual a zero");
    }

    return 0;
}
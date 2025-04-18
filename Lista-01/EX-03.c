//Escreva um programa para ler, calcular e escrever a média aritmética entre dois números.
#include <stdio.h>

int main(){
    float NUM1, NUM2, RESULTADO;

    printf("Escreva o primeiro valor: ");
    scanf("%f", &NUM1);

    printf("Escreva o segundo valor: ");
    scanf("%f", &NUM2);

    RESULTADO = (NUM1 + NUM2) / 2;

    printf("A média aritmética entre os valores %.2f e %.2f é: %.2f\n", NUM1, NUM2, RESULTADO);

    return 0;
}
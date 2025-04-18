//Faça um programa para ler dois valores (x e y), calcular e mostrar x elevado à potência de y.
#include <stdio.h>

int main(){
    float X, Y, RESULTADO;

    printf("Informe o valor X: ");
    scanf("%f", &X);

    printf("Informe o valor Y: ");
    scanf("%f", &Y);

    RESULTADO = pow(X, Y);

    printf("O valor de %2.f elavado a %2.f igual: %2.f", X, Y, RESULTADO);

    return 0;
}
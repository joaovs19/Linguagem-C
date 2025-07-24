//Faça um programa que leia dois números reais e em seguida mostre: a soma, o produto, a divisão e a subtração entre eles
#include <stdio.h>

int main(){
    float NUM1, NUM2;

    printf("Digite o primeiro número: ");
    scanf("%f", &NUM1);

    printf("Digite o segundo número: ");
    scanf("%f", &NUM2);
    printf("\n");

    printf("A soma dos valores %.2f e %.2f igual: %.2f \n", NUM1, NUM2, NUM1+NUM2 );
    printf("\n");

    printf("O produto dos valores %.2f e %.2f igual: %.2f \n", NUM1, NUM2, NUM1*NUM2);
    printf("\n");
    
    printf("A divisão dos valores %.2f e %.2f igual: %.2f \n", NUM1, NUM2, NUM1/NUM2);
    printf("\n");

    printf("A subtração dos valores %.2f e %.2f igual: %.2f \n", NUM1, NUM2, NUM1-NUM2);
    printf("\n");

    return 0;
}
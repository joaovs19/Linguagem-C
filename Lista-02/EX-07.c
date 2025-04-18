//Faça um algoritmo que leia 3 valores inteiros (X, Y, Z), determina e escreve o menor deles. 
#include <stdio.h>

int main(){
        int X, Y, Z, MENOR;

        printf("Digite o valor de X: ");
        scanf("%d", &X);

        printf("Digite o valor de Y: ");
        scanf("%d", &Y);

        printf("Digite o valor de Z: ");
        scanf("%d", &Z);

        MENOR = X;

        if (Y < MENOR){
            MENOR = Y;
        }

        if (Z < MENOR) {
            MENOR = Z;
        }

        printf("O menor valor ente %d, %d e %d seria: %d\n", X, Y, Z, MENOR);
}
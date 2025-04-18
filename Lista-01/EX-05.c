//Sabendo que a área de um triângulo é a medida da sua base multiplicada pela medida de sua altura dividida por dois. Escreva um programa que solicite os valores da base e da altura e forneça a área do triângulo.
#include <stdio.h>

int main(){
    float BASE, ALTURA;

    printf("Informe a base do triangulo: ", BASE);
    scanf("%f",&BASE);

    printf("Informe a altura do triangulo: ", ALTURA);
    scanf("%f",&ALTURA);

    printf("A area do triangulo igual: %2.f ", (BASE * ALTURA) /2);

    return 0;
}
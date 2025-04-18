//Faça um programa para ler um valor (que represente o lado de um quadrado) calcular e mostrar a respectiva área do quadrado.
#include <stdio.h>

int main(){
    float LADO, AREA;

    printf("Informe o lado do quadrado em metros: ");
    scanf("%f", &LADO);

    AREA = LADO * LADO;

    printf("A area do quadrado igual: %2.fm2", AREA);

    return 0;
}
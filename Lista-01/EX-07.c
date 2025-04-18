//Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA
#include <stdio.h>

int main(){
    float COMPRIMENTO, LARGURA, ALTURA, VOLUME;

    printf("Informe o comprimento em metros: ");
    scanf("%f", &COMPRIMENTO);

    printf("Informe a largura em metros: ");
    scanf("%f", &LARGURA);

    printf("Informe a altura em metros: ");
    scanf("%f", &ALTURA);

    VOLUME = COMPRIMENTO * LARGURA * ALTURA;

    printf("O volume do retangulo igual: %2.fm", VOLUME);

    return 0;
}
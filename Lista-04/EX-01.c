/*1. Faça um algoritmo para ler, calcular e escrever a média entre três números conforme as opções 
abaixo: 
a) A média aritmética dada pela fórmula: a + b + c 
3 
 
b) A média harmônica dada pela fórmula:  3  
1 + 1 + 1 
a b c 
 
c) A média geométrica dada pela fórmula: 
 
Para cada opção crie um procedimento.*/
#include <stdio.h>
#include <math.h>

void mediaAritmetica(float a, float b, float c);
void mediaHarmonica(float a, float b, float c);
void mediaGeometrica(float a, float b, float c);

int main(){
    float a, b , c;

    printf("Informe tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    mediaAritmetica(a, b, c);
    mediaHarmonica(a, b, c);
    mediaGeometrica(a, b, c);

    return 0;
}

void mediaAritmetica(float a, float b, float c){
    float media = (a + b + c) / 3;
    printf("Media Aritmetica: %.2f\n", media);
}

void mediaHarmonica(float a, float b, float c){
    float media = 3 / ((1/a) + (1/b) + (1/c));
    printf("Media Harmonica: %.2f\n", media);
}

void mediaGeometrica(float a, float b, float c){
    float media = cbrt(a * b * c);
    printf("Media Geometrica: %.2f\n", media);
}
/*2. Faça um algoritmo para calcular e imprimir: 
a) Área de um quadrado 
b) Área de um triangulo 
c) Área de um cilindro 
Para cada opção faça a leitura dos dados necessários em um procedimento.*/
#include <stdio.h>
#include <math.h>

void areaQuadrado();
void areaTriangulo();
void areaCilindro();

int main(){
    areaQuadrado();
    areaTriangulo();
    areaCilindro();

    return 0;
}

void areaQuadrado(){
    float lado, area;

    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area do quadrado igual: %.2f\n", area);
}

void areaTriangulo(){
    float base, altura, area;

    printf("Informe a base do triangulo: ");
    scanf("%f", &base);

    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo igual: %.2f\n", area);
}

void areaCilindro(){
    float raio, altura, area;
    const float PI = 3.14159;

    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    printf("informe a altura do cilindro: ");
    scanf("%f", &altura);

    area = 2 * PI * pow(raio, 2) + 2 * PI * raio * altura;

    printf("A area do cilindro igual: %.2f\n", area);
}
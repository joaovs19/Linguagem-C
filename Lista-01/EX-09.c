//Faça um programa no qual o usuário fornece os valores de temperatura em Fahrenheit e o mesmo converte os valores para Celsius Apresente o resultado (pesquise a fórmula).
#include <stdio.h>

int main(){
    float TEMPERATURA, CELSIUS;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%2f", &TEMPERATURA);

    CELSIUS = (TEMPERATURA - 32) * 5 / 9;

    printf("A temperatura em celsius igual: %2.fC", CELSIUS);

    return 0;
}
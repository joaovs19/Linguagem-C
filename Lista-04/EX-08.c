/*8. Elabore uma função para efetuar o cálculo da quantidade de combustível gasto em uma viagem, 
utilizando-se um automóvel que faz 12 Kms por litro. No programa principal o usuário fornece o 
tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância 
percorrida, calculada em uma função especifica valor que será retornado à função. */
#include <stdio.h>

float calcularDistancia(float tempo, float velocidade){
    return tempo * velocidade;
}

float calcularConsumo(float distancia){
    return distancia / 12;
}

int main(){
    float tempo, velocidade, distancia, combustivel;

    printf("Informe o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo);

    printf("Informe a velocidade media em km/h: ");
    scanf("%f", &velocidade);

    distancia = calcularDistancia(tempo, velocidade);
    combustivel = calcularConsumo(distancia);

    printf("Distancia percorrida: %.2f km\n", distancia);
    printf("Combustivel gasto: %.2f litros\n", combustivel);

    return 0;
}
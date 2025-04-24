/*4. Construa um procedimento que, tem como parâmetros de entrada dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é: 
*/
#include <stdio.h>
#include <math.h>

void distanciaPontos();

int main(){
    distanciaPontos();

    return 0;
}

void distanciaPontos(){
    float X1, Y1, X2, Y2, D;

    printf("Informe as coordenadas do ponto 1 (x1 y1): ");
    scanf("%f %f", &X1, &Y1);

    printf("Informe as coordenadas do ponto 2 (x2 y2): ");
    scanf("%f %f", &X2, &Y2);

    D = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    
    printf("Distancia entre os pontos: %.2f\n", D);
}
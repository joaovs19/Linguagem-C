/*3. Faça um algoritmo para calcular o valor da diagonal de um paralelepípedo de lados a, b, c: 
a2 + b2 
L = D = 
L2 + c 2 
para este exercício utilize dois procedimentos: uma para encontrar L e outra para D. */
#include <stdio.h>
#include <math.h>

void calcularL(float a, float b, float * l);
void calcularD(float l, float c);

int main(){
    float a, b, c, l;

    printf("Informe o valor de A (Lado): ");
    scanf("%f", &a);

    printf("Informe o valor de B (lado): ");
    scanf("%f", &b);

    printf("Informe o valor de C (altura): ");
    scanf("%f", &c);

    calcularL(a, b, &l);
    calcularD(l, c);

    return 0;
}

void calcularL(float a, float b, float *l){
    *l = sqrt((a * a) + (b * b));
    printf("O valor de L (Diagonal da base) igual: %.2f\n", *l);
}

void calcularD(float l, float c){
    float d;
    d = sqrt((l * l) + (c * c));
    printf("O valor de D (diagonal do paralelepipedo) igual: %.2f\n", d);
}
//6. Faça um programa que calcule e escreva o valor de S: S= 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
#include <stdio.h>

int main() {
    int numerador = 1, denominador = 1;
    float S = 0;

    while (denominador <= 50) {
        S += (float)numerador / denominador;

        numerador += 2;
        denominador++;
    }

    printf("O valor de S igual: %.2f\n", S);

    return 0;
}

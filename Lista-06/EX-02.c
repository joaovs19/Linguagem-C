//2. Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série: S= 1000/1 – 997/2 + 994/3 -991/4 ...
#include <stdio.h>

int main() {
    int numerador = 1000;
    int denominador = 1;
    int contador = 1;
    double termo, soma = 0.0;

    do {
        termo = (double)numerador / denominador;

        if (contador % 2 == 0) {
            termo = -termo;
        }

        soma += termo;

        numerador -= 3;
        denominador++;
        contador++;
    } while (contador <= 50);

    printf("Soma dos 50 primeiros termos da serie: %.4lf\n", soma);

    return 0;
}


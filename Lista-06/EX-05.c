//5. Fazer um programa que calcule e escreva a soma dos 30 primeiros termos da sérieS=48010 − 47511+ 47012 − 46513+ . ..
#include <stdio.h>

int main() {
    int numerador = 480;
    int denominador = 10;
    int contador = 1;
    double termo, soma = 0.0;

    do {
        termo = (double)numerador / denominador;

        if (contador % 2 == 0) {
            termo = -termo;
        }

        soma += termo;

        numerador -= 5;  
        denominador++;   
        contador++;      
    } while (contador <= 30);  

    printf("Soma dos 30 primeiros termos da serie: %.4lf\n", soma);

    return 0;
}

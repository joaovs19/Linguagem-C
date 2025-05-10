/*3. Fazer um programa que:
a) leia o valor de X de uma unidade de entrada;
b)calcule e escreva o valor do seguinte somatório:
X 25
1 − X 24
2
+ X 23
3 − X 22
4
+ ...+ X
25*/
#include <stdio.h>
#include <math.h>

int main() {
    double x, soma = 0.0, termo;
    int expoente = 25;
    int denominador = 1;

    printf("Digite o valor de X: ");
    scanf("%lf", &x);

    do {
        termo = pow(x, expoente) / denominador;

        // Alterna o sinal
        if (denominador % 2 == 0) {
            termo = -termo;
        }

        soma += termo;

        expoente--;
        denominador++;
    } while (denominador <= 25);

    printf("Resultado do somatorio: %.4lf\n", soma);

    return 0;
}

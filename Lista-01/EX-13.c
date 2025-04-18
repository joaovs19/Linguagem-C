//Dado um número inteiro não nulo de três dígitos, imprimir este número ao contrário, isto e, se a entrada for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e um). Usar operações sobre inteiros, por exemplo, divisões sucessivas por 10.
#include <stdio.h>

int main() {
    int NUM, N1, N2, N3;

    printf("Informe um numero inteiro nao nulo de tres digitos: ");
    scanf("%d", &NUM);

    N1 = NUM / 100;         
    N2 = (NUM / 10) % 10;   
    N3 = NUM % 10;         

    printf("\nNúmero invertido: %d%d%d\n", N3, N2, N1);

    return 0;
}
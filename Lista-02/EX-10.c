//Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se forem, verificar se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um triângulo, escreva uma mensagem
#include <stdio.h>

int main() {
    float X, Y, Z;

    printf("Digite os tres lados do triangulo:\n");
    scanf("%f %f %f", &X, &Y, &Z);

    if ((X + Y > Z) && (X + Z > Y) && (Y + Z > X)) {
        printf("Os valores podem formar um triângulo.\n");

        if (X == Y && Y == Z) {
            printf("Tipo: Triangulo Equilatero.\n");
        } else if (X == Y || X == Z || Y == Z) {
            printf("Tipo: Triangulo Isosceles.\n");
        } else {
            printf("Tipo: Triangulo Escaleno.\n");
        }

    } else {
        printf("Os valores informados NAO formam um triangulo.\n");
    }

    return 0;
}
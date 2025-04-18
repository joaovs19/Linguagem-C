//Escreva um programa que leia dois números que deverão ser colocados, respectivamente, nas variáveis VA e VB. O programa deve, então, trocar os valores de VA por VB e vice-versa e mostrar o conteúdo destas variáveis.
#include <stdio.h>

int main(){
    float VA, VB, AUXILIAR;

    printf("Informe o valor de VA: ");
    scanf("%f", &VA);

    printf("Informe o valor VB: ");
    scanf("%f", &VB);

    AUXILIAR = VA;
    VA = VB;
    VB = AUXILIAR;

    printf("Apos a troca ficou: ");
    printf("\n");

    printf("VA %2.f", VA);
    printf("\n");

    printf("VB %2.f", VB);

    return 0;
}
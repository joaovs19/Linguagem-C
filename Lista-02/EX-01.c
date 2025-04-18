//Escrever um programa para ler e imprimir três números. Se o primeiro for positivo, imprimir sua raiz quadrada, caso contrário, imprimir o seu quadrado; se o segundo número for maior que 10 e menor que 100, imprimir a mensagem: “Número está entre 10 e 100 – intervalo permitido”; se o terceiro número for menor que o segundo, calcular e imprimir a diferença entre eles, caso contrário, imprimir o terceiro número adicionado de 1
#include <stdio.h>
#include <math.h> //usar funções matemáticas como sqrt e pow

int main(){
    int NUM1, NUM2, NUM3;

    printf("Informe os tres valores: ");
    scanf("%d %d %d", &NUM1, &NUM2, &NUM3);

    if (NUM1 > 0){
        printf("A raiz quadrada de %d igual %2.f\n", NUM1, sqrt(NUM1));
    } else {
        printf("O quadrado de %d igual %.2f\n", NUM1, pow(NUM1, 2));
    }

    if (NUM2 > 10 && NUM2 <100){
        printf("Número está entre 10 e 100 - intervalo permitido\n");
    }

    if (NUM3 < NUM2){
        printf("A diferença igual: %d\n", NUM2 - NUM3);
    } else {
        NUM3++;
        printf("NUM3 incrementado: %d\n", NUM3);
    }

    return 0;
}
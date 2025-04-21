/*Elabore um algoritmo que, apresente um menu, com as seguintes opções:
a. Calcular a média aritmética 
b. Calcular a média harmônica
c. Calcular a média geométrica.
Conforme a opção do usuário realize a operação selecionada.*/
#include <stdio.h>
#include <math.h>

int main(){
    char opcao;
    float num1, num2, media;

    printf("Escolha o tipo de media:\n");
    printf("A - Aritmetica\n");
    printf("B - Harmonica\n");
    printf("C - Geometrica\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    switch (opcao){
        case 'A':
        case 'a':
            printf("Informe o primeiro numero: ");
            scanf("%f", &num1);
            printf("Informe o segundo numero: ");
            scanf("%f", &num2);

            media = (num1 + num2) /2;

            printf("Media aritmetica: %.2f\n", media);
            break;

        case 'B':
        case 'b':
            printf("Informe o primeiro numero: ");
            scanf("%f", &num1);
            printf("Informe o segundo numero: ");
            scanf("%f", &num2);

            media = 2 * num1 * num2 / (num1 + num2);

            printf("Media harmonica: %.2f\n", media);
            break;

        case 'C':
        case 'c':
            printf("Informe o primeiro numero: ");
            scanf("%f", &num1);
            printf("Informe o segundo numero: ");
            scanf("%f", &num2);

            media = sqrt(num1 * num2);

            printf("Media geometrica: %.2f\n", media);
            break;

        default:
            printf("Informe uma opcao valida!!");
            break;
    }

    return 0;
}
/*Perguntar ao usuário se ele deseja calcular a área de um:
a. triângulo
b. circulo
c. cubo
d. cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela. */
#include <stdio.h>
#include <math.h>

int main(){
    char opcao;
    float base, altura, raio, lado, area;

    printf("Deseja calcular a area de:\n");
    printf("A - Triangulo\n");
    printf("B - Circulo\n");
    printf("C - Cubo\n");
    printf("D - Cilindro\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'A':
        case 'a': 
            printf("Informe a base do triangulo: ");
            scanf("%f", &base);
            printf("Informe a altura do triangulo: ");
            scanf("%f", &altura);

            area = (base * altura) / 2;

            printf("Area do triangulo: %.2f\n", area);
            break;
        
        case 'B':
        case 'b':
            printf("Informe o raio do circulo: ");
            scanf("%f", &raio);

            area = M_PI * raio * raio;

            printf("Area do circulo: %.2f\n", area);
            break;

        case 'C':
        case 'c':
            printf("Informe o lado do cubo: ");
            scanf("%f", &lado);

            area = 6 * lado * lado;

            printf("Area do cubo: %.2f\n", area);
            break;

        case 'D':
        case 'd': 
            printf("Informe o raio do cilindro: ");
            scanf("%f", &raio);
            printf("Informe a altura do cilindro: ");
            scanf("%f", &altura);

            area = 2 * M_PI * raio * (raio + altura);

            printf("Area do cilindro: %.2f\n", area);
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}
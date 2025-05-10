//12. Fazer um programa em C que seja capaz de ler um número inteiro positivo do teclado e de verificar se a sua sequência dígitos é exatamente a mesma, tanto se for analisado da esquerda para a direita quanto da direita para a esquerda. Caso seja, imprimir “ESSE NUMERO E PALINDROMO!!!”. Caso não seja, imprimir “ESSE NUMERO NAO E PALINDROMO!!!” OBSERVACÃO: utilize divisões e/ou multiplicações sucessivas por 10. 
#include <stdio.h>

int main() {
    int num, original, invertido = 0, resto;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido. Informe um número positivo.\n");
        return 1;
    }

    original = num;

    while (num > 0) {
        resto = num % 10;                
        invertido = invertido * 10 + resto; 
        num = num / 10;                   
    }

    if (original == invertido) {
        printf("ESSE NUMERO E PALINDROMO!!!\n");
    } else {
        printf("ESSE NUMERO NAO E PALINDROMO!!!\n");
    }

    return 0;
}

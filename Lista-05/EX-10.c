/*10. Fazer um programa em C que leia um número inteiro e positivo e verifique se esse número é
primo ou não é primo.*/
#include <stdio.h>

int main() {
    int num;

    printf("Informe um valor inteiro e positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Valor nao eh primo!!\n");
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("O numero %d nao eh primo!\n", num);
            return 0;
        }
    }

    printf("O valor %d eh primo!!\n", num);

    return 0; 
}

// 7. Sendo H = 1 + 1/2 + 1/3 + 1/4 +...+ 1/N, prepare um algoritmo para gerar o número H. O número N é fornecido pelo usuário.
#include <stdio.h>

int main() {
    int N, i = 1;
    float H = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Valor invalido. N deve ser positivo.\n");
        return 1;
    }

    while (i <= N) {
        H += 1.0 / i;
        i++;
    }

    printf("O valor de H eh: %.4f\n", H);

    return 0;
}

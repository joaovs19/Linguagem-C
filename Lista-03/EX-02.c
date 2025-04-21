//Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste de acordo com a categoria: se a mesma for A=50%, B=25%, C=15% e outras 5%. Depois mostre o valor antigo, o percentual de reajuste e o valor reajustado.
#include <stdio.h>

int main() {
    char CATEGORIA;
    float PRECO, VALOR_REAJUSTADO, PERCENTUAL;

    printf("Informe o valor do produto: ");
    scanf("%f", &PRECO);

    printf("Escolha a categoria do produto (A, B, C ou outra): ");
    scanf(" %c", &CATEGORIA); !

    switch (CATEGORIA) {
        case 'A':
        case 'a':
            PERCENTUAL = 50;
            break;

        case 'B':
        case 'b':
            PERCENTUAL = 25;
            break;

        case 'C':
        case 'c':
            PERCENTUAL = 15;
            break;

        default:
            PERCENTUAL = 5;
            break;
    }

    VALOR_REAJUSTADO = PRECO + (PRECO * (PERCENTUAL / 100));

    printf("\nValor antigo: R$ %.2f", PRECO);
    printf("\nPercentual de reajuste: %.0f%%", PERCENTUAL);
    printf("\nValor reajustado: R$ %.2f\n", VALOR_REAJUSTADO);

    return 0;
}

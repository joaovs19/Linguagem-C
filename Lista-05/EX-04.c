//4. Escrever um programa semelhante ao anterior que calcula as médias aritméticas de cada intervalo e as escreve, juntamente com o número de valores de cada intervalo.
#include <stdio.h>

int main() {
    int num;
    int count1 = 0, count2 = 0, count3 = 0;
    float sum1 = 0, sum2 = 0, sum3 = 0;

    printf("Digite numeros inteiros (negativo para parar):\n");
    scanf("%d", &num);

    while (num >= 0) {
        if (num <= 25) {
            sum1 += num;
            count1++;
        } else if (num <= 50) {
            sum2 += num;
            count2++;
        } else if (num <= 75) {
            sum3 += num;
            count3++;
        }
        scanf("%d", &num);
    }

    if (count1 > 0)
        printf("Intervalo [0-25]: Media = %.2f, Quantidade = %d\n", sum1 / count1, count1);
    else
        printf("Intervalo [0-25]: Nenhum valor.\n");

    if (count2 > 0)
        printf("Intervalo [26-50]: Media = %.2f, Quantidade = %d\n", sum2 / count2, count2);
    else
        printf("Intervalo [26-50]: Nenhum valor.\n");

    if (count3 > 0)
        printf("Intervalo [51-75]: Media = %.2f, Quantidade = %d\n", sum3 / count3, count3);
    else
        printf("Intervalo [51-75]: Nenhum valor.\n");

    return 0;
}


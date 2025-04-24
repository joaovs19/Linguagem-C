/*7. Escrever um procedimento que, tem como parâmetros de entrada um valor em reais. Este 
procedimento calcula qual o menor número possível de notas de 100, 50, 10, 5 e 1 em que o valor 
lido pode ser decomposto. Tal procedimento deve apresentar o valor lido e a relação de notas 
necessárias. */
#include <stdio.h>

float decomporNotas(int valor){
    int notas_100, notas_50, notas_10, notas_5, notas_1, total_notas;

    printf("Valor lido: %d\n", valor);

    notas_100 = valor / 100;
    valor = valor % 100;

    notas_50 = valor / 50;
    valor = valor % 50;

    notas_10 = valor / 10;
    valor = valor % 10;

    notas_5 = valor / 5;
    valor = valor % 5;

    notas_1 = valor;

    total_notas = notas_100 + notas_50 + notas_10 + notas_5 + notas_1;

    printf("Notas de 100: %d\n", notas_100);
    printf("Notas de 50:  %d\n", notas_50);
    printf("Notas de 10:  %d\n", notas_10);
    printf("Notas de 5:   %d\n", notas_5);
    printf("Notas de 1:   %d\n", notas_1);

    return total_notas;

}

int main(){
    int valor;

    printf("Informe o valor em real: ");
    scanf("%d", &valor);

    if (valor <= 0 ){
        printf("Valor inválido\n");
    } else {
        decomporNotas( valor);
    }

    return 0;
    
}
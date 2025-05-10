//8. Sabe-se que o número Neperiano e = 2.7182818 ... (que é um número irracional) pode ser calculado pela soma dos valores de uma série infinita, como mostrado abaixo: Fazer um programa em C que calcule este número (e) considerando apenas as 15 (quinze) primeiras parcelas.
#include <stdio.h>

int main() {
    int i = 1, j;
    double e = 1.0; 
    double fatorial;

    while (i < 15) {
        fatorial = 1;
        j = 1;
        while (j <= i) {
            fatorial *= j;
            j++;
        }
        e += 1.0 / fatorial;
        i++;
    }

    printf("Valor aproximado de e com 15 parcelas: %.8lf\n", e);

    return 0;
}

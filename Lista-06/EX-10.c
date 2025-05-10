//10. Fazer um programa em C que verifique se um número é perfeito ou não.
#include <stdio.h>

int main() {
    int num, soma = 0, i = 1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    do {
        if (num % i == 0) {  
            soma += i;  
        }
        i++; 
    } while (i < num);  

    if (soma == num) {
        printf("%d eh um numero perfeito.\n", num);
    } else {
        printf("%d nao eh um numero perfeito.\n", num);
    }

    return 0;
}

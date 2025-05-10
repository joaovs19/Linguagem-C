/*11. Fazer um programa em C para calcular e imprimir todos os números primos entre 1 e 100.*/
#include <stdio.h>

int main() {
    int num = 2, i, primo;

    while (num <= 100) {  
        primo = 1;
        i = 2; 
        while (i * i <= num) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
            i++;
        }
        if (primo == 1) {
            printf("%d eh primo \n", num); 
        }
        num++;
    }
    return 0;
}

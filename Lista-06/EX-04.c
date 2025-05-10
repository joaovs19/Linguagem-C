//4. A conversão de graus Farenheit para centígrados é obtida por C= 5 9 (F− 32 )
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    fahrenheit = 50;  

    printf("Tabela de conversao de Fahrenheit para Celsius:\n");
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------------\n");

    do {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);

        printf("%.0f\t\t%.2f\n", fahrenheit, celsius);

        fahrenheit++;  
    } while (fahrenheit <= 150);  

    return 0;
}

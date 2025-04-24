/*5. Faça um algoritmo no qual o usuário forneça uma temperatura em grau Celsius e o mesmo 
converta em Fahrenheit. Caso a temperatura seja fornecida em Fahrenheit converta para grau 
Celsius. Utilize funções para os cálculos. */
#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 1.8) + 32;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) / 1.8;
}

int main() {
    float temperatura, convertida;
    char escala;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a escala (C para Celsius, F para Fahrenheit): ");
    scanf(" %c", &escala);  

    switch (escala) {
        case 'C':
        case 'c':
            convertida = celsiusParaFahrenheit(temperatura);
            printf("Temperatura em Fahrenheit: %.2f\n", convertida);
            break;

        case 'F':
        case 'f':
            convertida = fahrenheitParaCelsius(temperatura);
            printf("Temperatura em Celsius: %.2f\n", convertida);
            break;

        default:
            printf("Escala inválida!\n");
            break;
    }

    return 0;
}
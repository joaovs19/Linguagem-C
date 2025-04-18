/*Fazer um programa para calcular o salário líquido de um funcionário com base na seguinte
fórmula:
SALARIO LIQUIDO=SALARIO BRUTO+PROVENTOS-DESCONTO
Devem ser respeitadas as seguintes condições para cálculo do desconto:
- Salário Bruto <=50, desconto de 5%;
- Salário Bruto > 50, desconto de 10 %*/
#include <stdio.h>

int main() {
    float SALARIOB, PROVENTOS, SALARIOLIQUIDO;

    printf("Informe o salário bruto e em seguida seus proventos: ");
    scanf("%f %f", &SALARIOB, &PROVENTOS);

    if (SALARIOB <= 50) {
        SALARIOLIQUIDO = (SALARIOB + PROVENTOS) * 0.95; 
    } else {
        SALARIOLIQUIDO = (SALARIOB + PROVENTOS) * 0.90; 
    }

    printf("Seu salário líquido é: %.2f\n", SALARIOLIQUIDO);

    return 0;
}
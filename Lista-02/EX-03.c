//Faça um algoritmo que leia a idade de uma pessoa e verifique se ela é: - Criança: Idade de 1 a 11 anos; - Adolescente: Idade maior que 12 anos e menor ou igual a 18 anos; - Adulto: Idade maior que 18 e menor ou igual a 65 anos; - Idosa: idade maior que 65 anos. Exiba em qual grupo a pessoa se enquadra.
#include <stdio.h>

int main(){
    int IDADE;

    printf("Informe sua idade: ");
    scanf("%d", &IDADE);

    if (IDADE >= 1 && IDADE <= 11){
        printf("Crianca");
    } else if (IDADE >= 12 && IDADE <= 18) {
        printf("Adolescente");
    } else if (IDADE >= 18 && IDADE <= 65){
        printf("Adulto");
    } else if (IDADE >= 65 && IDADE <= 120){
        printf("Idoso");
    } else if (IDADE > 120){
        printf("Imortalidade");
    }

    return 0;
}
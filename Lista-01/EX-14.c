// Desenvolva uma aplicação que receba a idade de um indivíduo em dias e mostre-a expressa em anos, meses e dias.
#include <stdio.h> 

int main(){
    int IDADE, MESES, ANOS, DIAS;

    printf("Informe a idade em dias: ");
    scanf("%d", &IDADE);

    ANOS = IDADE / 365;
    MESES = (IDADE % 365) / 30;
    DIAS = (IDADE % 365) % 30;

    printf("Idade: %d ano(s), %d mes(es), %d dia(s)\n", ANOS, MESES, DIAS);
}
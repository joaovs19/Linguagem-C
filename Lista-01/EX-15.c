//
#include <stdio.h>

int main(){
    int totalSegundos, horas, minutos, segundos;

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;

    totalSegundos = totalSegundos % 3600;

    minutos = totalSegundos / 60;

    segundos = totalSegundos % 60;

    printf("\nEquivalente: %d hora(s), %d minuto(s), %d segundo(s)\n", horas, minutos, segundos);

    return 0;
}
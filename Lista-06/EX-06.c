//6. Fazer um programa que calcule o volume de uma esfera em função do raio R. O raio deverá variar de 0 a 20 cm de 0.5 em 0.5cm. V=43π R3
#include <stdio.h>
#include <math.h>

int main() {
    double raio = 0.0;
    double volume;

    printf("Tabela de volumes de esferas com raios de 0 a 20 cm:\n");
    printf("Raio (cm)\tVolume (cm3)\n");
    printf("----------------------------\n");

    do {
        volume = (4.0 / 3.0) * M_PI * pow(raio, 3);

        printf("%.1f\t\t%.2f\n", raio, volume);

        raio += 0.5;  
    } while (raio <= 20.0);  

    return 0;
}

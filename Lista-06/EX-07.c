//
#include <stdio.h>

int main() {

    double altura_fulano = 1.50;
    double altura_ciclano = 1.10;
    int anos = 0;

    do {
        altura_fulano += 0.02;  
        altura_ciclano += 0.03; 
        
        anos++; 
    } while (altura_ciclano <= altura_fulano);  

    printf("Serao necessarios %d anos para Ciclano ultrapassar Fulano em altura.\n", anos);

    return 0;
}

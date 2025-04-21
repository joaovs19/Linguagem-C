//Fazer um programa para ler a primeira letra do estado civil de uma pessoa (S - solteiro, C - casado, V- viúvo, D - divorciado) e mostrar uma mensagem com a descrição. Considere letras maiúsculas e minúsculas. Mostre mensagem de erro, se necessário.
#include <stdio.h>

int main(){
    char ESTADO_CIVIL;
    
    printf("Escolha S (solteiro), C (casado), V (viuvo) ou D (divorciado/separado): ");
    scanf(" %c", &ESTADO_CIVIL);

    switch (ESTADO_CIVIL){
        case 'S':
        case 's':
            printf("Solteiro\n");
            break;
        
        case 'C':
        case 'c':
            printf("Casado\n");
            break;

        case 'V':
        case 'v':
            printf("Viuvo\n");
            break;

        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;
        
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}
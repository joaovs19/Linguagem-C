//Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2 deve-se usar 18W depotência. Faça um programa que recebe as duas dimensões de um cômodo (em metros), calcule e mostre asua área (em m2) e a potência de iluminação que deverá ser usada.
#include <stdio.h>

int main(){
    float LARGURA, COMPRIMENTO, AREA, PTW;
    
    printf("Informe a largura do comodo em metros: ");
    scanf("%f", &LARGURA);

    printf("Informe o comprimento do comodo em metros: ");
    scanf("%f", &COMPRIMENTO);

    AREA = LARGURA * COMPRIMENTO;

    PTW = AREA * 18;

    printf("A area do comodo igual: %2.fm2", AREA);
    printf("\n");

    printf("A potencia necessaria para iluminar igual: %2.fW", PTW);

    return 0;
}
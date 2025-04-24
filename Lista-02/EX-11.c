//Faça um algoritmo que leia um número que represente um determinado mês do ano. Após a leitura escreva por extenso qual o mês lido. Caso o número digitado não esteja na faixa de 1 ao12 escreva uma mensagem informando o usuário do erro da digitação. Depois de ser confirmado o mês deverá ser pedido o dia e o ano onde será aceito apenas quantos dias o mês possui (Ex: fevereiro possui 28 dias). Escrever a data informada por extenso (18/04/2023 – 18 de abril de 2023).
#include <stdio.h>

int main() {
    int DIA, MES, ANO;

    printf("Digite o mes (1 a 12): ");
    scanf("%d", &MES);

    if (MES >= 1 && MES <= 12) {
        printf("Digite o dia e o ano: ");
        scanf("%d %d", &DIA, &ANO);

        switch (MES) {
            case 1:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de janeiro de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de janeiro.\n");
                break;
            case 2:
                if (DIA >= 1 && DIA <= 28)
                    printf("%d de fevereiro de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de fevereiro.\n");
                break;
            case 3:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de marco de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de marco.\n");
                break;
            case 4:
                if (DIA >= 1 && DIA <= 30)
                    printf("%d de abril de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de abril.\n");
                break;
            case 5:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de maio de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de maio.\n");
                break;
            case 6:
                if (DIA >= 1 && DIA <= 30)
                    printf("%d de junho de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de junho.\n");
                break;
            case 7:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de julho de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de julho.\n");
                break;
            case 8:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de agosto de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de agosto.\n");
                break;
            case 9:
                if (DIA >= 1 && DIA <= 30)
                    printf("%d de setembro de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de setembro.\n");
                break;
            case 10:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de outubro de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de outubro.\n");
                break;
            case 11:
                if (DIA >= 1 && DIA <= 30)
                    printf("%d de novembro de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de novembro.\n");
                break;
            case 12:
                if (DIA >= 1 && DIA <= 31)
                    printf("%d de dezembro de %d\n", DIA, ANO);
                else
                    printf("Valor invalido para o dia do mes de dezembro.\n");
                break;
        }

    } else {
        printf("Valor informado para o mes e invalido.\n");
    }

    return 0;
}

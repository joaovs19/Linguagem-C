/*8. Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um
novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado e sua resposta (sim
ou não). Sabendo-se que foram entrevistadas 2.000 pessoas, fazer um programa que calcule e
escreva:
 o número de pessoas que responderam sim;
 o número de pessoas que responderam não;
 a porcentagem de pessoas do sexo feminino que responderam sim;
 a porcentagem de pessoas do sexo masculino que responderam não.*/
#include <stdio.h>

int main() {
    int num_pessoas = 2000;
    int sim = 0, nao = 0;
    int sim_feminino = 0, nao_masculino = 0;
    char sexo;
    int resposta;
    int i = 0;

    do {
        printf("Entrevistado %d de %d:\n", i + 1, num_pessoas);
        printf("Informe o sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);
        printf("Informe a resposta (1 para sim, 0 para não): ");
        scanf("%d", &resposta);

        if (resposta == 1) {
            sim++;
            if (sexo == 'F' || sexo == 'f') {
                sim_feminino++;
            }
        } else if (resposta == 0) {
            nao++;
            if (sexo == 'M' || sexo == 'm') {
                nao_masculino++;
            }
        }

        i++;
    } while (i < num_pessoas);

    double perc_feminino_sim = (double)sim_feminino / (num_pessoas / 2) * 100;
    double perc_masculino_nao = (double)nao_masculino / (num_pessoas / 2) * 100;

    printf("\nResultados da pesquisa:\n");
    printf("Numero de pessoas que responderam SIM: %d\n", sim);
    printf("Numero de pessoas que responderam NAO: %d\n", nao);
    printf("Porcentagem de pessoas do sexo feminino que responderam SIM: %.2f%%\n", perc_feminino_sim);
    printf("Porcentagem de pessoas do sexo masculino que responderam NAO: %.2f%%\n", perc_masculino_nao);

    return 0;
}


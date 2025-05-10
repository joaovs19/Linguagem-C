/*9. Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para cada
curso, é fornecido o seguinte conjunto de valores:
• o código do curso
• número de vagas
• número de candidatos do sexo masculino
• número de candidatos do sexo feminino
• O último conjunto, para indicar fim de dados, contém o código do curso igual a zero.
Fazer um programa que calcule e escreva, para cada curso, o número de candidatos por vaga e a
porcentagem de candidatos do sexo feminino (escreva também o código correspondente do
curso).*/
#include <stdio.h>

int main() {
    int codigo_curso, vagas, num_masculino, num_feminino;
    double candidatos_por_vaga, porcentagem_feminino;

    while (1) {
        printf("Informe o codigo do curso (0 para encerrar): ");
        scanf("%d", &codigo_curso);

        if (codigo_curso == 0) {
            break;
        }

        printf("Informe o numero de vagas: ");
        scanf("%d", &vagas);
        printf("Informe o numero de candidatos do sexo masculino: ");
        scanf("%d", &num_masculino);
        printf("Informe o numero de candidatos do sexo feminino: ");
        scanf("%d", &num_feminino);

        int num_total_candidatos = num_masculino + num_feminino;
        candidatos_por_vaga = (double)num_total_candidatos / vagas;
        porcentagem_feminino = (double)num_feminino / num_total_candidatos * 100;

        printf("\nCurso %d:\n", codigo_curso);
        printf("Numero de candidatos por vaga: %.2lf\n", candidatos_por_vaga);
        printf("Porcentagem de candidatas do sexo feminino: %.2lf%%\n\n", porcentagem_feminino);
    }

    return 0;
}

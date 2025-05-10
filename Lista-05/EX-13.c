/*13. Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio de uma determinada escola. Cada aluno fornecia a sua série (primeira-1, segunda-2, terceira-3 ou quarta-4), quantos livros liam por mês e se gostavam de fazer redação (Sim-1 ou Não-0). Fazer um programa que leia os dados, calcule e imprima: 
1. A quantidade de alunos que está na terceira série; 
2. A maior quantidade de livros lidos por um aluno que está na quarta série; 
3. A porcentagem de alunos que não gostam de fazer redação e que estão na terceira série.*/
#include <stdio.h>

int main() {
    int n, i = 0;
    int serie, livros, redacao;

    int cont_terceira = 0;
    int max_livros_quarta = 0;
    int terceira_nao_redacao = 0;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    while (i < n) {
        printf("\nAluno %d:\n", i + 1);

        // Leitura dos dados do aluno
        printf("Serie (1 a 4): ");
        scanf("%d", &serie);

        printf("Quantidade de livros lidos por mes: ");
        scanf("%d", &livros);

        printf("Gosta de redacao? (1 = Sim, 0 = Nao): ");
        scanf("%d", &redacao);

        if (serie == 3) {
            cont_terceira++;

            if (redacao == 0) {
                terceira_nao_redacao++;
            }
        }

        if (serie == 4 && livros > max_livros_quarta) {
            max_livros_quarta = livros;
        }

        i++;
    }

    float porcentagem = 0;
    if (cont_terceira > 0) {
        porcentagem = (terceira_nao_redacao * 100.0) / cont_terceira;
    }

    printf("\nRESULTADOS:\n");
    printf("1. Quantidade de alunos na terceira serie: %d\n", cont_terceira);
    printf("2. Maior quantidade de livros lidos por um aluno da quarta serie: %d\n", max_livros_quarta);
    printf("3. Porcentagem de alunos da terceira serie que nao gostam de redacao: %.2f%%\n", porcentagem);

    return 0;
}

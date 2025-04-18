//12. Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração máxima de 24 horas.
#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    printf("Digite a hora inicial do jogo (0 a 23): ");
    scanf("%d", &hora_inicio);

    printf("Digite a hora final do jogo (0 a 23): ");
    scanf("%d", &hora_fim);

    if (hora_inicio < 0 || hora_inicio > 23 || hora_fim < 0 || hora_fim > 23) {
        printf("Horas inválidas. Digite valores entre 0 e 23.\n");
        return 1;
    }

    if (hora_inicio == hora_fim) {
        duracao = 24;
    } else if (hora_inicio < hora_fim) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_fim;
    }

    printf("A duração do jogo foi de %d hora(s).\n", duracao);

    return 0;
}

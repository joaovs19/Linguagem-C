//Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi escolhido através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco avestruz pinguim e pato. Utilize a estrutura de múltipla escolha e a seguinte classificação:
#include <stdio.h>

int main() {
    char grupo, tipo, subtipo;

    printf("O animal é mamífero ou ave? (m = mamífero / a = ave): ");
    scanf(" %c", &grupo);

    switch (grupo) {
        case 'm':
        case 'M':
            printf("O mamífero é quadrúpede ou bípede? (q = quadrúpede / b = bípede): ");
            scanf(" %c", &tipo);

            switch (tipo) {
                case 'q':
                case 'Q':
                    printf("O quadrúpede é carnívoro ou herbívoro? (c = carnívoro / h = herbívoro): ");
                    scanf(" %c", &subtipo);

                    switch (subtipo) {
                        case 'c':
                        case 'C':
                            printf("Animal: leão\n");
                            break;
                        case 'h':
                        case 'H':
                            printf("Animal: cavalo\n");
                            break;
                        default:
                            printf("Opção inválida.\n");
                    }
                    break;

                case 'b':
                case 'B':
                    printf("O bípede é onívoro ou frutífero? (o = onívoro / f = frutífero): ");
                    scanf(" %c", &subtipo);

                    switch (subtipo) {
                        case 'o':
                        case 'O':
                            printf("Animal: homem\n");
                            break;
                        case 'f':
                        case 'F':
                            printf("Animal: macaco\n");
                            break;
                        default:
                            printf("Opção inválida.\n");
                    }
                    break;

                default:
                    printf("Opção inválida.\n");
            }
            break;

        case 'a':
        case 'A':
            printf("A ave é não-voadora ou nadadora? (n = não-voadora / d = nadadora): ");
            scanf(" %c", &tipo);

            switch (tipo) {
                case 'n':
                case 'N':
                    printf("A ave não-voadora é tropical ou polar? (t = tropical / p = polar): ");
                    scanf(" %c", &subtipo);

                    switch (subtipo) {
                        case 't':
                        case 'T':
                            printf("Animal: avestruz\n");
                            break;
                        case 'p':
                        case 'P':
                            printf("Animal: pinguim\n");
                            break;
                        default:
                            printf("Opção inválida.\n");
                    }
                    break;

                case 'd':
                case 'D':
                    printf("Animal: pato\n");
                    break;

                default:
                    printf("Opção inválida.\n");
            }
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

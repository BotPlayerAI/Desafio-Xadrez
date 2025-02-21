#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita utilizando laço "for"
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima, Direita) utilizando laço "while"
    int casasBispo = 5;
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda utilizando laço "do-while"
    int casasRainha = 8;
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casasRainha);

    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda
    // Utilizando loops aninhados: um laço "for" para dividir as duas etapas do movimento
    // (parte vertical e parte horizontal) e um laço "while" para executar cada etapa.
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        int passos;
        // Se i == 0, trata da parte vertical: mover 2 casas para baixo.
        // Se i == 1, trata da parte horizontal: mover 1 casa para a esquerda.
        if (i == 0) {
            passos = 2;
        } else {
            passos = 1;
        }

        int m = 0;
        while (m < passos) {
            if (i == 0) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            m++;
        }
    }

    return 0;
}
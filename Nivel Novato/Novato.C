#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita utilizando estrutura "for"
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo: 5 casas na diagonal (para cima e à direita) utilizando estrutura "while"
    int casasBispo = 5;
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda utilizando estrutura "do-while"
    int casasRainha = 8;
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= casasRainha);

    return 0;
}
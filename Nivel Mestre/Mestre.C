#include <stdio.h>

// Função recursiva para mover a Torre (movimento para a direita)
// Parâmetros:
//   passo: número da casa atual (inicia em 1)
//   total: total de casas a mover
void moverTorre(int passo, int total) {
    if (passo > total)
        return;
    printf("Casa %d: Direita\n", passo);
    moverTorre(passo + 1, total);
}

// Função recursiva para mover a Rainha (movimento para a esquerda)
void moverRainha(int passo, int total) {
    if (passo > total)
        return;
    printf("Casa %d: Esquerda\n", passo);
    moverRainha(passo + 1, total);
}

// Função recursiva para mover o Bispo (movimento diagonal: Cima, Direita)
// Nesta função, utilizamos também loops aninhados:
// - O loop externo simula o movimento vertical.
// - O loop interno simula o movimento horizontal.
void moverBispoRecursivo(int passo, int total) {
    if (passo > total)
        return;
    for (int i = 0; i < 1; i++) {       // Loop externo: movimento vertical (única iteração)
        for (int j = 0; j < 1; j++) {   // Loop interno: movimento horizontal (única iteração)
            printf("Casa %d: Cima, Direita\n", passo);
        }
    }
    moverBispoRecursivo(passo + 1, total);
}

int main() {
    // Definindo os totais de casas para cada peça
    int totalTorre = 5;
    int totalRainha = 8;
    int totalBispo = 5;
    
    // Movimento da Torre utilizando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(1, totalTorre);
    printf("\n");
    
    // Movimento do Bispo utilizando recursividade com loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(1, totalBispo);
    printf("\n");
    
    // Movimento da Rainha utilizando recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(1, totalRainha);
    printf("\n");
    
    // Movimento do Cavalo utilizando loops aninhados complexos
    // Novo movimento: "em L" para cima e para a direita (2 casas para cima e 1 para a direita)
    printf("Movimento do Cavalo:\n");
    // Loop externo com for para controlar as etapas do movimento
    for (int i = 0; i < 2; i++) {
        int j = 0;
        // Determina o número de iterações do loop interno:
        // Para i == 0 (primeira etapa): apenas 1 iteração para mover 1 casa para cima.
        // Para i == 1 (segunda etapa): 2 iterações (primeiro para outra casa para cima e depois para a direita).
        int limit = (i == 0) ? 1 : 2;
        while (j < limit) {
            if (i == 0) {
                // Primeira etapa: mover uma casa para cima
                if (j == 0) {
                    printf("Cima\n");
                    j++;
                    continue; // Usa continue para pular qualquer código remanescente neste ciclo
                }
            } else { // i == 1: segunda etapa
                if (j == 0) {
                    // Segunda casa para cima
                    printf("Cima\n");
                } else if (j == 1) {
                    // Em seguida, movimento para a direita
                    printf("Direita\n");
                    break; // Após o movimento horizontal, encerra o loop interno
                }
            }
            j++;
        }
    }
    
    return 0;
}
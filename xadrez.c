#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Definição das dimensões do tabuleiro
#define TAM_TABULEIRO 8

// Função para movimentação do Bispo (diagonal)
void moverBispo(int linha, int coluna) {
    printf("Movimentos possíveis do Bispo a partir de (%d, %d):\n", linha, coluna);
    for (int i = 1; i < TAM_TABULEIRO; i++) {
        if (linha + i < TAM_TABULEIRO && coluna + i < TAM_TABULEIRO)
            printf("Diagonal Direita Baixo (%d, %d)\n", linha + i, coluna + i);
        if (linha - i >= 0 && coluna - i >= 0)
            printf("Diagonal Esquerda Cima (%d, %d)\n", linha - i, coluna - i);
        if (linha + i < TAM_TABULEIRO && coluna - i >= 0)
            printf("Diagonal Esquerda Baixo (%d, %d)\n", linha + i, coluna - i);
        if (linha - i >= 0 && coluna + i < TAM_TABULEIRO)
            printf("Diagonal Direita Cima (%d, %d)\n", linha - i, coluna + i);
    }
    printf("\n");
}

// Função para movimentação da Torre (horizontal e vertical)
void moverTorre(int linha, int coluna) {
    printf("Movimentos possíveis da Torre a partir de (%d, %d):\n", linha, coluna);
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        if (i != linha) printf("Cima/Baixo (%d, %d)\n", i, coluna); // Vertical
        if (i != coluna) printf("Esquerda/Direita (%d, %d)\n", linha, i); // Horizontal
    }
    printf("\n");
}

// Função para movimentação da Rainha (horizontal, vertical e diagonal)
void moverRainha(int linha, int coluna) {
    printf("Movimentos possíveis da Rainha a partir de (%d, %d):\n", linha, coluna);
    moverTorre(linha, coluna); // Movimento da torre (horizontal e vertical)
    moverBispo(linha, coluna); // Movimento do bispo (diagonal)
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int linhaInicial = 4, colunaInicial = 4; // Posição inicial das peças no tabuleiro
    
    moverBispo(linhaInicial, colunaInicial);
    moverTorre(linhaInicial, colunaInicial);
    moverRainha(linhaInicial, colunaInicial);

    return 0;
}

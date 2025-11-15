#include <stdio.h>

// Definições fixas
#define N 10 // Tamanho do tabuleiro N x N
#define NAVIO 3 // Valor para representar o navio

int main() {
    // 1. Representação e Inicialização do Tabuleiro 10x10 com 0s (água)
    int tabuleiro[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas e Tamanho do Navio (Tamanho fixo 3)
    int tamanho_navio = 3;

    // --- 2. Posicionar Navio 1: Horizontal (Início em [2][1]) ---
    // A linha (2) é fixa. A coluna (1) incrementa.
    int linha_h = 2;
    int coluna_h = 1;

    for (int j = 0; j < tamanho_navio; j++) {
        // Marcamos a posição [2][1], [2][2] e [2][3] com o valor 3
        tabuleiro[linha_h][coluna_h + j] = NAVIO;
    }

    // --- 3. Posicionar Navio 2: Vertical (Início em [5][6]) ---
    // A coluna (6) é fixa. A linha (5) incrementa.
    int linha_v = 5;
    int coluna_v = 6;
    
    for (int i = 0; i < tamanho_navio; i++) {
        // Marcamos a posição [5][6], [6][6] e [7][6] com o valor 3
        tabuleiro[linha_v + i][coluna_v] = NAVIO;
    }

    // --- 4. Exibir o Tabuleiro (Com cabeçalho para melhor visualização) ---

    printf("  ");
    for (int j = 0; j < N; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("%d ", i); // Índice da linha
        for (int j = 0; j < N; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

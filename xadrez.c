#include <stdio.h>

// Função recursiva para movimentar a Torre (horizontal - Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva para movimentar a Rainha (horizontal - Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Função recursiva e loops aninhados para movimentar o Bispo (diagonal Cima Direita)
void moverBispo(int verticais, int horizontais) {
    if (verticais <= 0 || horizontais <= 0) return;

    // Loop mais externo: movimento vertical
    for (int v = 0; v < verticais; v++) {
        // Loop mais interno: movimento horizontal
        for (int h = 0; h < horizontais; h++) {
            if (v == h) {
                printf("Cima Direita\n");
            }
        }
    }

    // Reduz as casas restantes e chama recursivamente
    moverBispo(verticais - 1, horizontais - 1);
}

// Função com loops aninhados complexos para movimentar o Cavalo (2 cima, 1 direita)
void moverCavalo() {
    int movimentos = 1; // número de movimentos em "L"
    int cima = 2;
    int direita = 1;

    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < movimentos; m++) {
        // Laço para movimento vertical (Cima)
        for (int i = 0; i < cima; i++) {
            if (i == 1) continue; // ignora segundo movimento no meio (exemplo de controle)
            printf("Cima\n");
        }

        // Laço para movimento horizontal (Direita)
        int j = 0;
        while (j < direita) {
            if (j > 1) break; // quebra por segurança, mesmo que não atinja
            printf("Direita\n");
            j++;
        }
    }

    printf("\n");
}

int main() {
    // Movimentação da Torre usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // Movimentação do Bispo usando recursividade + loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(5, 5);

    printf("\n");

    // Movimentação da Rainha usando recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // Movimentação do Cavalo com loops aninhados e controle de fluxo
    moverCavalo();

    return 0;
}
#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal cima-direita usando while
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda usando do-while
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // Movimento do Cavalo - 2 casas para baixo e 1 para esquerda, em "L"
    printf("Movimento do Cavalo:\n");

    // Loop externo com for para as duas casas para baixo
    for (int m = 0; m < 2; m++) {
        printf("Baixo\n");
        
        // Loop interno com while (aqui só pra ilustrar o uso de aninhamento)
        int n = 0;
        while (n < 1 && m == 1) { // Só executa na segunda casa pra baixo
            printf("Esquerda\n");
            n++;
        }
    }

    return 0;
}
/*
02) Gere uma matriz 6x6 com zeros. Imprima a matriz. P
reencha a diagonal principal desta matriz com 1 (um). 
Imprima novamente.
*/
#include <stdio.h>

#define TAMANHO_MATRIZ 6

int main() {
    // Declaração e inicialização da matriz com zeros
    int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = {0};
    int i, j;

    // Imprime a matriz inicial
    printf("Matriz inicial (com zeros):\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Preenche a diagonal principal com 1
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        matriz[i][i] = 1;
    }

    // Imprime a matriz após preencher a diagonal principal com 1
    printf("\nMatriz após preencher a diagonal principal com 1:\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

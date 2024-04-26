/*
01) Gere uma matriz 10x10 com números aleatórios entre 10 e 99.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche a matriz com números aleatórios entre 10 e 99
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 90 + 10; // Gera números entre 10 e 99
        }
    }

    // Imprime a matriz
    printf("Matriz 10x10 com números aleatórios entre 10 e 99:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

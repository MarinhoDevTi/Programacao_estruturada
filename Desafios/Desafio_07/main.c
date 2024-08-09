#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int i, j;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche a matriz com valores aleatórios entre 0 e 9
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    // Calcula a soma das linhas e coloca na última coluna
    for (i = 0; i < SIZE - 1; i++) {
        int rowSum = 0;
        for (j = 0; j < SIZE - 1; j++) {
            rowSum += matrix[i][j];
        }
        matrix[i][SIZE - 1] = rowSum;
    }

    // Calcula a soma das colunas e coloca na última linha
    for (j = 0; j < SIZE - 1; j++) {
        int colSum = 0;
        for (i = 0; i < SIZE - 1; i++) {
            colSum += matrix[i][j];
        }
        matrix[SIZE - 1][j] = colSum;
    }

    // Calcula a soma da última linha e coluna
    int totalSum = 0;
    for (j = 0; j < SIZE - 1; j++) {
        totalSum += matrix[SIZE - 1][j];
    }
    matrix[SIZE - 1][SIZE - 1] = totalSum;

    // Imprime a matriz
    printMatrix(matrix);

    return 0;
}

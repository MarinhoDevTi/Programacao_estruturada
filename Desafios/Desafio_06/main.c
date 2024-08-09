#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LINHAS 2
#define COLUNAS 10

int main() {
    double matriz[LINHAS][COLUNAS];
    double soma = 0.0, media, desvioPadrao = 0.0;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    // Preencher a primeira linha com valores aleatórios entre 1 e 100 e calcular a soma
    printf("Valores na primeira linha:\n");
    for (int i = 0; i < COLUNAS; i++) {
        matriz[0][i] = rand() % 100 + 1;  // Valores aleatórios entre 1 e 100
        soma += matriz[0][i];
        printf("%.2f ", matriz[0][i]);
    }

    // Calcular a média
    media = soma / COLUNAS;

    // Calcular o desvio padrão populacional
    for (int i = 0; i < COLUNAS; i++) {
        desvioPadrao += pow(matriz[0][i] - media, 2);
    }
    desvioPadrao = sqrt(desvioPadrao / COLUNAS);

    // Preencher a segunda linha com os z-scores
    for (int i = 0; i < COLUNAS; i++) {
        matriz[1][i] = (matriz[0][i] - media) / desvioPadrao;
    }

    // Exibir os valores do z-score
    printf("\n\nZ-scores correspondentes na segunda linha:\n");
    for (int i = 0; i < COLUNAS; i++) {
        printf("%.2f ", matriz[1][i]);
    }
    printf("\n");

    return 0;
}

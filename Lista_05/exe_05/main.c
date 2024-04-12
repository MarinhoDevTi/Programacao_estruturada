#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
05) Crie um vetor de 4 posições. Preencha aleatoriamente somente com 0 e 1. Imprima o vetor na tela.

*/

int main() {
    // Inicializando a semente do gerador de números aleatórios
    srand(time(NULL));

    // Criando o vetor de 4 posições
    int vetor[4];

    // Preenchendo o vetor aleatoriamente com 0 e 1
    for (int i = 0; i < 4; i++) {
        vetor[i] = rand() % 2; // Gera um número aleatório entre 0 e 1
    }

    // Imprimindo o vetor na tela
    printf("Vetor gerado:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

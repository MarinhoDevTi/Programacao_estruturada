#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para converter um vetor de números binários em decimal
int binarioParaDecimal(int vetor[], int tamanho) {
    int decimal = 0;
    for (int i = 0; i < tamanho; i++) {
        decimal += vetor[i] * (1 << (tamanho - i - 1));
    }
    return decimal;
}

int main() {
    // Inicializando a semente para gerar números aleatórios
    srand(time(NULL));

    // Criando um vetor de 4 posições
    int vetor[4];

    // Preenchendo o vetor aleatoriamente com 0s e 1s
    for (int i = 0; i < 4; i++) {
        vetor[i] = rand() % 2;
    }

    // Imprimindo o vetor na tela
    printf("Vetor gerado: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Convertendo o vetor binário para decimal
    int decimal = binarioParaDecimal(vetor, 4);

    // Imprimindo o resultado da conversão
    printf("Decimal: %d\n", decimal);

    return 0;
}

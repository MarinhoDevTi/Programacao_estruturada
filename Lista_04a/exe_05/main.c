#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;

    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gerando e imprimindo os 10 números aleatórios
    printf("Números aleatórios: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", rand() % 101); // Gera um número aleatório entre 0 e 100
    }
    printf("\n"); // Nova linha para melhorar a legibilidade

    return 0;
}

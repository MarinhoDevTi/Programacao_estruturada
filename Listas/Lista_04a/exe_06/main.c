#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
06) Faça um código que gere 10 números aleatórios entre 0 e 100. 
Imprima em uma única linha, com os números separados por espaços.
*/

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

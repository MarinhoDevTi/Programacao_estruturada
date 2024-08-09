#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int numeros[15];
    int totalNumeros = 15;
    int numeroAleatorio;
    bool repetido;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    for (int i = 0; i < totalNumeros; i++) {
        do {
            repetido = false;
            numeroAleatorio = rand() % 25 + 1; // Gera número aleatório entre 1 e 25

            // Verifica se o número já foi gerado
            for (int j = 0; j < i; j++) {
                if (numeros[j] == numeroAleatorio) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido);

        numeros[i] = numeroAleatorio; // Armazena o número no array
    }

    // Exibir os números gerados
    printf("Números sorteados da Lotofácil:\n");
    for (int i = 0; i < totalNumeros; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

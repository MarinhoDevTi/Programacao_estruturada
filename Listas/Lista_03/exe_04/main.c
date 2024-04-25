#include <stdio.h>

/*
04) Faça um programa que imprima todos os 
números ímpares entre 0 e 100 
em ordem decrescente.
*/

int main() {
    printf("Números ímpares entre 0 e 100 em ordem decrescente:\n");

    // Loop de 100 a 0 com decremento de 1
    for (int i = 100; i >= 0; i--) {
        // Verifica se o número é ímpar
        if (i % 2 != 0) {
            printf("%d ", i); // Imprime o número ímpar
        }
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

/*
06) Faça um programa que imprima 
 todos os números múltiplos de 4 
 entre 100 e 300 em ordem decrescente.
*/

int main() {
    printf("Números múltiplos de 4 entre 100 e 300 em ordem decrescente:\n");

    // Loop de 300 a 100 com decremento de 1
    for (int i = 300; i >= 100; i--) {
        // Verifica se o número é múltiplo de 4
        if (i % 4 == 0) {
            printf("%d ", i); // Imprime o número múltiplo de 4
        }
    }

    printf("\n");

    return 0;
}


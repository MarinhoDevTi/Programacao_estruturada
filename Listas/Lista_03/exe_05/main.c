#include <stdio.h>

/*
05) Faça um programa que imprima todos 
os números múltiplos de 3 entre 100 e 200 
em ordem crescente.
*/

int main() {
    printf("Números múltiplos de 3 entre 100 e 200 em ordem crescente:\n");

    // Loop de 100 a 200
    for (int i = 100; i <= 200; i++) {
        // Verifica se o número é múltiplo de 3
        if (i % 3 == 0) {
            printf("%d ", i); // Imprime o número múltiplo de 3
        }
    }

    printf("\n");

    return 0;
}
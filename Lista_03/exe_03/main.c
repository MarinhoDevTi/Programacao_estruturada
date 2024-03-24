#include <stdio.h>

/*

03) Faça um programa que imprima todos
os números pares entre 0 e 100 em ordem 
crescente.
 
*/

int main() {
    printf("Números pares entre 0 e 100 em ordem crescente:\n");
    
    // Loop de 0 a 100
    for (int i = 0; i <= 100; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            printf("%d ", i); // Imprime o número par
        }
    }

    printf("\n");

    return 0;
}


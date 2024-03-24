#include <stdio.h>

/*
09) Faça um programa que calcule a soma de 
todos os números de 1 a 10. Imprima todos os
 números e a soma total.
 
*/

int main() {
    int soma = 0;

    // Loop para somar os números de 1 a 10 e imprimir cada número
    printf("Números de 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        soma += i;
    }

    // Imprime a soma total
    printf("\nSoma total: %d\n", soma);

    return 0;
}

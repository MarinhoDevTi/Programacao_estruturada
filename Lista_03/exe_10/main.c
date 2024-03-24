#include <stdio.h>

/*
10) Faça um programa que calcule a soma 
de todos os números pares entre 0 e 100. 
Imprima os números e a soma total.
*/

int main() {
    int soma = 0;

    // Loop para somar os números pares de 0 a 100 e imprimir cada número
    printf("Números pares entre 0 e 100:\n");
    for (int i = 0; i <= 100; i += 2) {
        printf("%d ", i);
        soma += i;
    }

    // Imprime a soma total
    printf("\nSoma total dos números pares: %d\n", soma);

    return 0;
}
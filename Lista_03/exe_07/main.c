#include <stdio.h>

/*
07) Faça um programa que imprima na tela todos 
os números entre 0 e 100, porém substitua os 
múltiplos de 4 pela palavra “plim”. 
Ex. 0, 1, 2, 3, plim, 5, 6, 7, plim, 9, …

*/

int main() {
    printf("Números de 0 a 100 substituindo múltiplos de 4 por 'plim':\n");

    // Loop de 0 a 100
    for (int i = 0; i <= 100; i++) {
        // Verifica se o número é múltiplo de 4
        if (i % 4 == 0 && i != 0) {
            printf("plim"); // Substitui múltiplos de 4 pela palavra "plim"
        } else {
            printf("%d", i); // Imprime o número normalmente
        }

        // Imprime uma vírgula e um espaço, exceto para o último número
        if (i != 100) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}

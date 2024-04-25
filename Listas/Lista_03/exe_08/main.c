#include <stdio.h>

/*
08) Faça um programa que imprima na tela 
todas as tabuadas do 0 ao 9. Ex.
1 x 1 = 1
1 x 2 = 2
…
1 x 9 = 9
2 x 1 = 2
2 x 2 = 4
…
9 x 8 = 72
9 x 9 = 81
*/

int main() {
    // Loop externo para percorrer os multiplicadores de 1 a 9
    for (int multiplicador = 1; multiplicador <= 9; multiplicador++) {
        printf("Tabuada do %d:\n", multiplicador);

        // Loop interno para percorrer os multiplicandos de 1 a 9
        for (int multiplicando = 1; multiplicando <= 9; multiplicando++) {
            int resultado = multiplicador * multiplicando;
            printf("%d x %d = %d\n", multiplicador, multiplicando, resultado);
        }

        printf("\n"); // Adiciona uma linha em branco entre as tabuadas
    }

    return 0;
}
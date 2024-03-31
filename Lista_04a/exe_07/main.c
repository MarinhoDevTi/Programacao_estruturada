#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
07) Faça um código para gerar 3 números aleatórios 
entre 100 e 999 e que sejam divisíveis por 5
*/

int main() {
    int i, numero, contador = 0;

    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    printf("Números aleatórios divisíveis por 5: ");
    while (contador < 3) {
        // Gerando um número aleatório entre 100 e 999
        numero = rand() % 900 + 100;

        // Verificando se o número é divisível por 5
        if (numero % 5 == 0) {
            printf("%d ", numero);
            contador++;
        }
    }
    printf("\n");

    return 0;
}

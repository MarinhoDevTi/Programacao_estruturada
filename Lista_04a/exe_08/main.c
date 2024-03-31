#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_BILHETE 6
#define MINIMO_NUMERO 1
#define MAXIMO_NUMERO 60

int main() {
    int bilhete[TAMANHO_BILHETE];
    int i, j, numero_aleatorio, repetido;

    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gerando os números do bilhete
    printf("Bilhete da Mega-Sena: ");
    for (i = 0; i < TAMANHO_BILHETE; i++) {
        // Gerando um número aleatório
        numero_aleatorio = (rand() % (MAXIMO_NUMERO - MINIMO_NUMERO + 1)) + MINIMO_NUMERO;
        
        // Verificando se o número já foi sorteado antes
        repetido = 0;
        for (j = 0; j < i; j++) {
            if (bilhete[j] == numero_aleatorio) {
                repetido = 1;
                break;
            }
        }

        // Se o número já foi sorteado, decrementa o índice para repetir a geração
        if (repetido) {
            i--;
            continue;
        }

        // Armazenando o número gerado no bilhete
        bilhete[i] = numero_aleatorio;
    }

    // Ordenando os números do bilhete em ordem crescente
    for (i = 0; i < TAMANHO_BILHETE - 1; i++) {
        for (j = 0; j < TAMANHO_BILHETE - i - 1; j++) {
            if (bilhete[j] > bilhete[j + 1]) {
                int temp = bilhete[j];
                bilhete[j] = bilhete[j + 1];
                bilhete[j + 1] = temp;
            }
        }
    }

    // Imprimindo os números do bilhete
    for (i = 0; i < TAMANHO_BILHETE; i++) {
        printf("%d ", bilhete[i]);
    }
    printf("\n");

    return 0;
}

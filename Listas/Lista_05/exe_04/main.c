#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
04) Preencher um vetor de oito elementos inteiros aleatórios entre 0 e 50. Mostrar o vetor e informar 
quantos números são maiores que 30, somar estes números. Também somar todos os números.
*/

int main() {
    // Inicializando a semente do gerador de números aleatórios
    srand(time(NULL));

    // Criando o vetor de oito elementos inteiros
    int vetor[8];
    int contador_maiores_que_30 = 0;
    int soma_maiores_que_30 = 0;
    int soma_total = 0;

    // Preenchendo o vetor com números aleatórios entre 0 e 50
    for (int i = 0; i < 8; i++) {
        vetor[i] = rand() % 51; // Gera um número aleatório entre 0 e 50
        soma_total += vetor[i]; // Somando todos os números do vetor
        if (vetor[i] > 30) {
            contador_maiores_que_30++; // Incrementando o contador se o número for maior que 30
            soma_maiores_que_30 += vetor[i]; // Somando os números maiores que 30
        }
    }

    // Mostrando o vetor
    printf("Vetor gerado:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Informando quantos números são maiores que 30 e a soma desses números
    printf("Quantidade de números maiores que 30: %d\n", contador_maiores_que_30);
    printf("Soma dos números maiores que 30: %d\n", soma_maiores_que_30);

    // Mostrando a soma de todos os números
    printf("Soma total de todos os números: %d\n", soma_total);

    return 0;
}

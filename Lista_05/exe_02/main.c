#include <stdio.h>

/*
02) Preencher um vetor com os números pares do número 2 ao 20. Imprimir na tela o vetor.
*/

int main() {
    // Criando o vetor para armazenar os números pares
    int vetor[10]; // Como são 10 números pares de 2 a 20, o vetor terá tamanho 10
    int numero = 2; // Iniciando com o primeiro número par

    // Preenchendo o vetor com os números pares de 2 a 20
    for (int i = 0; i < 10; i++) {
        vetor[i] = numero;
        numero += 2; // Incrementando para o próximo número par
    }

    // Imprimindo o vetor na tela
    printf("Vetor com os números pares de 2 a 20:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

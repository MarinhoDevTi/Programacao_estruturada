#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n1, n2, n3, n4, n5, n6;

    srand(time(NULL)); // Inicializando o gerador de números aleatórios

    // Gerando o primeiro número aleatório
    n1 = rand() % 60 + 1;

    // Gerando o segundo número aleatório diferente do primeiro
    do {
        n2 = rand() % 60 + 1;
    } while (n2 == n1);

    // Gerando o terceiro número aleatório diferente dos anteriores
    do {
        n3 = rand() % 60 + 1;
    } while (n3 == n1 || n3 == n2);

    // Gerando o quarto número aleatório diferente dos anteriores
    do {
        n4 = rand() % 60 + 1;
    } while (n4 == n1 || n4 == n2 || n4 == n3);

    // Gerando o quinto número aleatório diferente dos anteriores
    do {
        n5 = rand() % 60 + 1;
    } while (n5 == n1 || n5 == n2 || n5 == n3 || n5 == n4);

    // Gerando o sexto número aleatório diferente dos anteriores
    do {
        n6 = rand() % 60 + 1;
    } while (n6 == n1 || n6 == n2 || n6 == n3 || n6 == n4 || n6 == n5);

    // Exibindo os números gerados na mesma linha
    printf("Números aleatórios gerados: %d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);

    return 0;
}

#include <stdio.h>

/*

02) Faça um código que imprima seu nome na tela 10 vezes. 
Primeiro uma vez em cada linha, depois sem quebra de linhas
 e com separação por vírgulas.

 */

int main() {
    int i;
    char nome[50]; // Definindo uma variável para armazenar o nome

    // Solicita ao usuário que digite o nome
    printf("Digite o nome que deseja imprimir: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha da entrada

    // Imprime o nome uma vez em cada linha
    printf("\nImprimindo uma vez em cada linha:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", nome);
    }

    // Imprime o nome sem quebra de linhas, com separação por vírgulas
    printf("\nImprimindo sem quebra de linhas, com separação por vírgulas:\n");
    for (i = 0; i < 10; i++) {
        printf("%s", nome);
        if (i < 9) {
            printf(", "); // Adiciona uma vírgula se não for a última iteração
        }
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

/*
01) Faça um código que preencha um vetor com números inteiros (oito elementos). Solicitar um número ao usuário. 
Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir, imprimir
 uma mensagem que não existe.
*/

int main() {
    // Criando o vetor com números inteiros
    int vetor[8];
    int i, numero_pesquisa;

    // Preenchendo o vetor com 8 elementos (números inteiros)
    for (i = 0; i < 8; i++) {
        printf("Digite um número inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Solicitando um número ao usuário para pesquisar
    printf("Digite o número que deseja pesquisar no vetor: ");
    scanf("%d", &numero_pesquisa);

    // Verificando se o número existe no vetor e em qual posição
    int encontrado = 0;
    for (i = 0; i < 8; i++) {
        if (vetor[i] == numero_pesquisa) {
            printf("O número %d foi encontrado na posição %d do vetor.\n", numero_pesquisa, i);
            encontrado = 1;
            break;
        }
    }

    // Se o número não for encontrado, imprimir uma mensagem
    if (!encontrado) {
        printf("O número %d não foi encontrado no vetor.\n", numero_pesquisa);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
01) Faça o jogo de par ou ímpar, porém single player (um jogador).
 Humano vs computador. O computador gera um número aleatório 
 entre 0 e 5 (inclusive), e o jogador escolhe um número entre 0 e 5 
 (inclusive). Exiba todas as informações para verificar quem venceu.
*/

int main() {
    int jogador, computador;
    
    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    
    // Gerando um número aleatório para o computador entre 0 e 5
    computador = rand() % 6;
    
    // Solicitando ao jogador que escolha um número entre 0 e 5
    printf("Escolha um número entre 0 e 5: ");
    scanf("%d", &jogador);
    
    // Verificando se o número escolhido pelo jogador está dentro do intervalo válido
    if (jogador < 0 || jogador > 5) {
        printf("Número inválido. Por favor, escolha um número entre 0 e 5.\n");
        return 1; // Encerrando o programa com código de erro
    }
    
    // Exibindo a escolha do jogador e do computador
    printf("Você escolheu: %d\n", jogador);
    printf("O computador escolheu: %d\n", computador);
    
    // Verificando quem venceu
    int soma = jogador + computador;
    if (soma % 2 == 0) {
        printf("A soma é %d, que é par. Você ganhou!\n", soma);
    } else {
        printf("A soma é %d, que é ímpar. O computador ganhou!\n", soma);
    }
    
    return 0;
}

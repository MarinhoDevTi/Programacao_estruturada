#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    
    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    
    // Gerando um número aleatório para o computador (0 para pedra, 1 para papel, 2 para tesoura)
    computador = rand() % 3;
    
    // Solicitando ao jogador que escolha uma opção (0 para pedra, 1 para papel, 2 para tesoura)
    printf("Escolha uma opção:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    scanf("%d", &jogador);
    
    // Verificando se a escolha do jogador é válida
    if (jogador < 0 || jogador > 2) {
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        return 1; // Encerrando o programa com código de erro
    }
    
    // Exibindo a escolha do jogador e do computador
    printf("Você escolheu: ");
    switch (jogador) {
        case 0:
            printf("Pedra\n");
            break;
        case 1:
            printf("Papel\n");
            break;
        case 2:
            printf("Tesoura\n");
            break;
    }
    printf("O computador escolheu: ");
    switch (computador) {
        case 0:
            printf("Pedra\n");
            break;
        case 1:
            printf("Papel\n");
            break;
        case 2:
            printf("Tesoura\n");
            break;
    }
    
    // Verificando quem venceu
    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) || 
               (jogador == 1 && computador == 0) || 
               (jogador == 2 && computador == 1)) {
        printf("Você ganhou!\n");
    } else {
        printf("O computador ganhou!\n");
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para imprimir o gol com as posições
void imprimirGol() {
    printf("===========================\n");
    printf("|   1   |   2   |   3   |\n");
    printf("|       |       |       |\n");
    printf("|   4   |   5   |   6   |\n");
    printf("|       |       |       |\n");
    printf("|   7   |   8   |   9   |\n");
    printf("===========================\n");
}

int main() {
    int chute_jogador, defesa_computador;
    
    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    
    printf("Bem-vindo ao jogo de disputa de pênaltis!\n");
    printf("O gol está dividido em nove partes numeradas de 1 a 9.\n");
    
    while (1) {
        // Imprime o gol com as posições
        imprimirGol();
        
        // Solicita ao jogador que escolha uma posição para chutar
        printf("Escolha uma posição para chutar (1 a 9): ");
        scanf("%d", &chute_jogador);
        
        // Verifica se a escolha do jogador é válida
        if (chute_jogador < 1 || chute_jogador > 9) {
            printf("Posição inválida. Por favor, escolha uma posição entre 1 e 9.\n");
            continue;
        }
        
        // Gera uma posição aleatória para a defesa do computador
        defesa_computador = rand() % 9 + 1;
        
        // Exibe a posição escolhida pelo goleiro
        printf("O goleiro escolheu defender a posição %d.\n", defesa_computador);
        
        // Verifica se o goleiro defendeu o chute ou se foi gol
        if (defesa_computador == chute_jogador) {
            printf("Defendeu!!!\n");
        } else {
            printf("Gol!!!\n");
        }
        
        // Pergunta ao jogador se deseja continuar jogando
        printf("Deseja continuar jogando? (1 - Sim, 0 - Não): ");
        int continuar;
        scanf("%d", &continuar);
        
        if (continuar == 0) {
            printf("Obrigado por jogar!\n");
            break;
        }
    }
    
    return 0;
}

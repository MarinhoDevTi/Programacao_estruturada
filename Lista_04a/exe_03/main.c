#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, tentativa, tentativas_restantes = 5;
    
    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    
    // Gerando um número aleatório entre 0 e 100
    numero_secreto = rand() % 101;
    
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 0 e 100.\n");
    
    // Laço para permitir até 5 tentativas
    while (tentativas_restantes > 0) {
        printf("Tentativas restantes: %d\n", tentativas_restantes);
        printf("Digite o seu palpite: ");
        scanf("%d", &tentativa);
        
        // Verificando se o palpite está dentro do intervalo válido
        if (tentativa < 0 || tentativa > 100) {
            printf("Palpite inválido. Por favor, escolha um número entre 0 e 100.\n");
            continue ;
        }
        
        // Verificando se o palpite é igual ao número secreto
        if (tentativa == numero_secreto) {
            printf("Parabéns! Você acertou o número secreto: %d\n", numero_secreto);
            break; // Encerrando o jogo
        } else if (tentativa < numero_secreto) {
            printf("O número secreto é maior que %d.\n", tentativa);
        } else {
            printf("O número secreto é menor que %d.\n", tentativa);
        }
        
        // Decrementando o número de tentativas restantes
        tentativas_restantes--;
    }
    
    if (tentativas_restantes == 0) {
        printf("Você esgotou todas as tentativas. O número secreto era: %d\n", numero_secreto);
    }
    
    return 0;
}

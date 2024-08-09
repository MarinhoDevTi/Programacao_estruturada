#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    
    // Gerar número secreto aleatório entre 1 e 100
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;
    
    printf("Bem-vindo ao sistema de segurança da Torre Tijuco!\n");
    printf("Você tem 5 tentativas para adivinhar a senha (um número entre 1 e 100).\n");

    // Loop para as 5 tentativas
    while (tentativas < 5) {
        printf("Tentativa %d: Insira um número de 1 a 100: ", tentativas + 1);
        if (scanf("%d", &palpite) != 1) {
            printf("Entrada inválida. Por favor, insira um número válido.\n");
            while (getchar() != '\n'); // Limpar o buffer de entrada
            continue;
        }

        if (palpite < 1 || palpite > 100) {
            printf("Por favor, insira um número entre 1 e 100.\n");
            continue;
        }

        tentativas++;

        if (palpite == numeroSecreto) {
            printf("Senha correta! Acesso garantido!\n");
            return 0; // Sair do programa
        } else if (palpite > numeroSecreto) {
            printf("A senha é menor do que o valor inserido.\n");
        } else {
            printf("A senha é maior do que o valor inserido.\n");
        }
    }

    printf("Senha incorreta. Número de tentativas excedido!\n");
    return 0;
}

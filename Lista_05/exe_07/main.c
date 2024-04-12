#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
07) Crie um jogo que mostre um número binário para o usuário, e este tem que acertar
 o número decimal correspondente. Similar ao exercício 9 da lista 4. Este número binário 
 tem que estar em um vetor de 4 posições. O jogo termina quando o jogador errar três vezes. 
 Mostrar quantas vezes o jogador acertou e errou.
*/
// Função para converter um vetor de números binários em decimal
int binarioParaDecimal(int vetor[], int tamanho) {
    int decimal = 0;
    for (int i = 0; i < tamanho; i++) {
        decimal += vetor[i] * (1 << (tamanho - i - 1));
    }
    return decimal;
}

int main() {
    srand(time(NULL));

    int tentativasMaximas = 3;
    int tentativas = 0;
    int acertos = 0;
    int erros = 0;

    while (erros < tentativasMaximas) {
        // Gerando um número binário aleatório
        int binario[4];
        for (int i = 0; i < 4; i++) {
            binario[i] = rand() % 2;
        }

        // Convertendo o número binário em decimal
        int decimalCorreto = binarioParaDecimal(binario, 4);

        // Exibindo o número binário e solicitando a entrada do usuário
        printf("Número binário: ");
        for (int i = 0; i < 4; i++) {
            printf("%d", binario[i]);
        }
        printf("\n");

        int resposta;
        printf("Digite o número decimal correspondente: ");
        scanf("%d", &resposta);

        // Verificando se a resposta está correta
        if (resposta == decimalCorreto) {
            printf("Parabéns, você acertou!\n");
            acertos++;
        } else {
            printf("Você errou. O número correto era: %d\n", decimalCorreto);
            erros++;
        }

        printf("Acertos: %d | Erros: %d\n", acertos, erros);
    }

    printf("Fim do jogo. Você errou três vezes.\n");

    return 0;
}

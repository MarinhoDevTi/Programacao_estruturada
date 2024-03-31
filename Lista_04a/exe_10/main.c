#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, soma, resposta;

    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gerando dois números aleatórios entre 0 e 99
    num1 = rand() % 100;
    num2 = rand() % 100;

    // Calculando a soma dos números gerados
    soma = num1 + num2;

    // Solicitando ao usuário que digite a soma dos números
    printf("Digite a soma de %d e %d: ", num1, num2);
    scanf("%d", &resposta);

    // Verificando se a resposta do usuário está correta
    if (resposta == soma) {
        printf("Parabéns! Sua resposta está correta.\n");
    } else {
        printf("Ops! Sua resposta está incorreta. A resposta correta é %d.\n", soma);
    }

    return 0;
}

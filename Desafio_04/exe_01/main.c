#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_operation(int *num1, int *num2, char *operator) {
    *num1 = rand() % 21; // Gera um número aleatório entre 0 e 20
    *num2 = rand() % 21;
    if (*num1 < *num2 && *operator == '/') { // Verifica se o primeiro termo é menor que o segundo
        *num1 += *num2; // Se for, troca os termos para garantir que o primeiro seja maior
    }
    switch (rand() % 4) { // Gera um operador aleatório
        case 0:
            *operator = '+';
            break;
        case 1:
            *operator = '-';
            break;
        case 2:
            *operator = '*';
            break;
        case 3:
            *operator = '/';
            if (*num2 == 0) // Evita divisão por zero
                *num2 = 1;
            break;
    }
    return *num1, *num2, *operator;
}

float calculate_result(int num1, int num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return (float) num1 / num2;
    }
}

int main() {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    printf("Bem-vindo ao Jogo de Operacoes Matematicas!\n");
    printf("Voce tera 10 tentativas para acertar o resultado de cada operacao.\n");
    printf("Vamos comecar!\n\n");

    int score = 0;

    for (int i = 0; i < 10; i++) {
        int num1, num2;
        char operator;
        generate_operation(&num1, &num2, &operator);
        float result = calculate_result(num1, num2, operator);

        printf("Qual e o resultado de %d %c %d?\n", num1, operator, num2);
        float guess;
        scanf("%f", &guess);

        if (guess == result) {
            printf("Parabens! Voce acertou!\n\n");
            score++;
        } else {
            printf("Ops! A resposta correta era %.2f.\n\n", result);
        }
    }

    printf("Fim do jogo!\n");
    printf("Sua pontuacao final e: %d/10\n", score);

    return 0;
}

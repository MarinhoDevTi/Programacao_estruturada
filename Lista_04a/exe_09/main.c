#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

// Função para gerar uma data aleatória
void gerarDataAleatoria(int *dia, int *mes, int *ano) {
    // Gera um ano aleatório entre 2000 e 2024
    *ano = rand() % 25 + 2000;

    // Gera um mês aleatório entre 1 e 12
    *mes = rand() % 12 + 1;

    // Define o número máximo de dias no mês de acordo com o mês e o ano
    int max_dias;
    switch (*mes) {
        case 2:
            if (ehBissexto(*ano)) {
                max_dias = 29;
            } else {
                max_dias = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            max_dias = 30;
            break;
        default:
            max_dias = 31;
    }

    // Gera um dia aleatório entre 1 e o número máximo de dias no mês
    *dia = rand() % max_dias + 1;
}

int main() {
    int dia, mes, ano;

    // Inicializando o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gerando uma data aleatória
    gerarDataAleatoria(&dia, &mes, &ano);

    // Imprimindo a data gerada
    printf("Data aleatória gerada: %02d/%02d/%d\n", dia, mes, ano);

    return 0;
}

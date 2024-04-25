#include <stdio.h>

/*
 Faça um programa que receba a quantidade de vitórias, recebe a quantidade
 de derrotas, recebe a quantidade de empates. Exibe na tela o nome da equipe 
 (a sua escolha), a quantidade de vitórias, derrotas e empates, 
 e os respectivos percentuais. Ex.: 8 vitórias - 53%, 5 derrotas 
 - 33%, 2 empates - 13%
*/

int main() {
    char equipe[50];
    int vitorias, derrotas, empates;
    float totalJogos;

    // Solicita e lê o nome da equipe
    printf("Digite o nome da equipe: ");
    scanf("%s", equipe);

    // Solicita e lê a quantidade de vitórias, derrotas e empates
    printf("Digite a quantidade de vitórias da equipe %s: ", equipe);
    scanf("%d", &vitorias);
    printf("Digite a quantidade de derrotas da equipe %s: ", equipe);
    scanf("%d", &derrotas);
    printf("Digite a quantidade de empates da equipe %s: ", equipe);
    scanf("%d", &empates);

    // Calcula o total de jogos
    totalJogos = vitorias + derrotas + empates;

    // Calcula os percentuais
    float percentualVitorias = (vitorias / totalJogos) * 100;
    float percentualDerrotas = (derrotas / totalJogos) * 100;
    float percentualEmpates = (empates / totalJogos) * 100;

    // Imprime os resultados
    printf("\nEquipe: %s\n", equipe);
    printf("Vitórias: %d - %.2f%%\n", vitorias, percentualVitorias);
    printf("Derrotas: %d - %.2f%%\n", derrotas, percentualDerrotas);
    printf("Empates: %d - %.2f%%\n", empates, percentualEmpates);

    return 0;
}

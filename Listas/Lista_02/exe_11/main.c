#include <stdio.h>

/*
 Faça um programa que imprima o nome de duas equipes e receba a quantidade 
 de vitórias, empates e derrotas de cada equipe. Cada vitória valem 3 pontos,
 cada empate vale 1 ponto, derrota não vale ponto. Imprimir o nome de cada 
 equipe (a sua escolha), o número de vitórias, empates e derrotas, 
 e a pontuação total.
*/

int main() {
    char equipe1[50], equipe2[50];
    int vitorias1, empates1, derrotas1;
    int vitorias2, empates2, derrotas2;
    int pontos1, pontos2;

    // Solicita e lê os nomes das equipes
    printf("Digite o nome da primeira equipe: ");
    scanf("%s", equipe1);
    printf("Digite o nome da segunda equipe: ");
    scanf("%s", equipe2);

    // Solicita e lê os resultados da primeira equipe
    printf("Digite a quantidade de vitórias da equipe %s: ", equipe1);
    scanf("%d", &vitorias1);
    printf("Digite a quantidade de empates da equipe %s: ", equipe1);
    scanf("%d", &empates1);
    printf("Digite a quantidade de derrotas da equipe %s: ", equipe1);
    scanf("%d", &derrotas1);

    // Solicita e lê os resultados da segunda equipe
    printf("Digite a quantidade de vitórias da equipe %s: ", equipe2);
    scanf("%d", &vitorias2);
    printf("Digite a quantidade de empates da equipe %s: ", equipe2);
    scanf("%d", &empates2);
    printf("Digite a quantidade de derrotas da equipe %s: ", equipe2);
    scanf("%d", &derrotas2);

    // Calcula os pontos para cada equipe
    pontos1 = vitorias1 * 3 + empates1;
    pontos2 = vitorias2 * 3 + empates2;

    // Imprime os resultados
    printf("\n%s:\n", equipe1);
    printf("Vitórias: %d\n", vitorias1);
    printf("Empates: %d\n", empates1);
    printf("Derrotas: %d\n", derrotas1);
    printf("Pontuação total: %d\n\n", pontos1);

    printf("%s:\n", equipe2);
    printf("Vitórias: %d\n", vitorias2);
    printf("Empates: %d\n", empates2);
    printf("Derrotas: %d\n", derrotas2);
    printf("Pontuação total: %d\n", pontos2);

    return 0;
}

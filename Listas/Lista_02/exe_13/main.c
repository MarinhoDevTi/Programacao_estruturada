#include <stdio.h>

/*

Faça um jogo no qual o jogador tem que escolher uma dentre quatro classes diferentes:
Guerreiro
Mago
Druida
Sacerdote
Depois o jogador tem que escolher um dentre quatro territórios/regiões diferentes:
Azeroth
Azkaban
Aurora
Brightwood
Depois o jogador tem que escolher um dentre quatro armas diferentes:
Machado cego
Picareta invertida
Adaga sem ponta
Corrente sem elo
No fim o jogo deve exibir uma mensagem única com todas as escolhas que o jogador fez. Exemplo:
Você agora é um Mago da região de Aurora armado com um Machado cego.


*/

int main() {
    // Classes
    char *classes[4] = {"Guerreiro", "Mago", "Druida", "Sacerdote"};

    // Territórios/Regiões
    char *regioes[4] = {"Azeroth", "Azkaban", "Aurora", "Brightwood"};

    // Armas
    char *armas[4] = {"Machado cego", "Picareta invertida", "Adaga sem ponta", "Corrente sem elo"};

    int escolha;

    // Escolha da classe
    printf("Escolha sua classe:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, classes[i]);
    }
    scanf("%d", &escolha);
    escolha--; // Ajustando para o índice do array
    printf("Você escolheu ser um %s.\n", classes[escolha]);

    // Escolha da região
    printf("\nEscolha a região:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, regioes[i]);
    }
    scanf("%d", &escolha);
    escolha--; // Ajustando para o índice do array
    printf("Você escolheu a região de %s.\n", regioes[escolha]);

    // Escolha da arma
    printf("\nEscolha sua arma:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, armas[i]);
    }
    scanf("%d", &escolha);
    escolha--; // Ajustando para o índice do array
    printf("Você escolheu a arma %s.\n", armas[escolha]);

    return 0;
}

#include <stdio.h>

/*
Fazer um programa que receba três stats do jogador: vida, ataque e defesa. 
A experiência do jogador (XP) é a média entre os três stats. Imprima 
o nível do jogador conforme a seguir (0 a 25 XP) novato, 
(26 a 50 XP) mago, (51 a 75 XP) mago supremo, (76 a 100 XP)  lorde das magias.
*/

int main() {

    //declaração de variaveis
    int vida, ataque, defesa;
    float xp;

    //leitura de daddos 
    printf("Digite a quantidade de vida do jogador: ");
    scanf("%d", &vida);

    printf("Digite a quantidade de ataque do jogador: ");
    scanf("%d", &ataque);

    printf("Digite a quantidade de defesa do jogador: ");
    scanf("%d", &defesa);

    xp = (vida + ataque + defesa) / 3.0;

    printf("XP do jogador: %.2f\n", xp);

    if(xp >= 0 && xp <= 25) {
        printf("Nível do jogador: Novato\n");
    } else if(xp >= 26 && xp <= 50) {
        printf("Nível do jogador: Mago\n");
    } else if(xp >= 51 && xp <= 75) {
        printf("Nível do jogador: Mago Supremo\n");
    } else if(xp >= 76 && xp <= 100) {
        printf("Nível do jogador: Lorde das Magias\n");
    } else {
        printf("Nível do jogador: N/A\n");
    }

    return 0;
}

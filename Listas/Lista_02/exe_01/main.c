#include <stdio.h>

/*01) Faça um código que receba um número inteiro (metros) e converta para polegadas.
Dica: 1m = 100cm; 1 polegada = 2,54cm.
-
-
Exemplo:
5 metros = 196,85 polegadas.*/

//Variais Globais.
float POL = 39.37;

int main () {

    //declaração de variaveis ...
    float polegadas = 0;
    int met = 0;

    //Leitura de dados 
    printf("Programa de conversão !!!\n");
    printf("\n");

    printf("Digite a quantidade de Metros: ");
    scanf("%d", & met);

    //conversão 
    polegadas = met * POL;
    printf("\n");

    printf("%d metros equivalem a %.2f polegadas !", met, polegadas);
    printf("\n");

    return 0;

}
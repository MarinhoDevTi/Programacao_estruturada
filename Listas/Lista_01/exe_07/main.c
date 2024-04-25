#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*07) Faça um programa em C que exiba na tela as informações a seguir, uma informação em cada linha.
Seu nome completo;
A cidade onde você nasceu;
Sua idade;
A data do dia que você fez esse programa.
*/

int main () {

    //declaração de variaveis 
    char nome [15];
    char cidade [15];
    int idade = 0;

    printf("Digite seu Nome, Cidade e Idade: ");
    printf("\n");

    printf("Informe seu Nome: ");
    gets(nome);
    printf("\n");

    printf("Informe sua Cidade de nascimento: \n");
    gets(cidade);
    printf("\n");

    printf("Informe sua Idade: \n");
    scanf("%d", & idade);
    printf("\n");

     // Obtendo a data atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    //Impressão das Informações
    printf("\n");
    printf("Nome Completo: %s\n", nome);
    printf("\n");
    printf("Cidade de Nascimento: %s\n", cidade);
    printf("\n");
    printf("Sua idade é: %d\n",  idade);
    printf("\n");
    printf("Data Atual do Programa: %02d/%02d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("\n");


    
}
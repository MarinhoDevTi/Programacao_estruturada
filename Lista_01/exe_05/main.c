#include <stdio.h>

/*05) Faça um código que receba um número inteiro (metros) e converta para centímetros.
Exemplo:
5 metros = 500 centímetros
*/

int main () {

    //declaração de variaveis
    int num = 0;
    int res = 0;

    printf("Digite um Numero: ");
    scanf("%d", & num);
    printf("\n");

    res = num * 100;
    printf("\n");

    printf("%d métros, equivalem a %d centímetros\n", num, res);
    printf("\n");
    
}
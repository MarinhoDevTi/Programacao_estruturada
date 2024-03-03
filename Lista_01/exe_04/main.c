#include <stdio.h>

/*04) Faça um código que receba dois números inteiros do usuário (n1 e n2), e exiba na tela: 
N1 + N2 = resultado
N1 - N2 = resultado
N1 * N2 = resultado


Exemplo: O usuário digitou 7 e 5. Exibe na tela:
7 + 5 = 12
7 - 5 = 2
7 * 5 = 35
*/

int main () {

    //declaração de variaveis
    int num1 = 0;
    int num2 = 0;
    int sm = 0;
    int sb = 0;
    int mp = 0;

    printf("Digite o Primeiro Número: ")    ;
    scanf("%d", & num1);

    printf("\n");

    printf("Digite o Segundo número: ");
    scanf("%d", & num2);

    printf("\n");

    sm = num1 + num2;
    sb = num1 - num2;
    mp = num1 * num2;

    printf(" %d + %d = %d\n", num1, num2, sm);
    printf("\n");

    printf(" %d - %d = %d\n", num1, num2, sb);
    printf("\n");

    printf(" %d * %d = %d\n", num1, num2, mp);
    printf("\n");



}
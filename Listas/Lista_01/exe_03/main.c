#include <stdio.h>
/*03) Faça um código que receba um número inteiro do usuário e exiba na tela:
O número digitado
O seu dobro
O seu triplo
*/

int main () {
    
    //declaração de variáveis ...
    int num = 0;
    int dobro = 0;
    int triplo = 0;


    printf ("Olá Digite um :");
    scanf("%d", &num);


    dobro = num * 2;
    triplo = num * 3;


    printf("O Número digitado foi %d o dobro dele é %d", num, dobro);
    printf("\n");
    printf("O Número digitado foi %d o triplo dele é %d", num, triplo);
    

    return 0;

}
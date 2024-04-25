#include <stdio.h>

/*08) Faça um programa que receba um número inteiro do usuário. Imprima na tela o número recebido, dois números abaixo e dois números acima deste número. Não precisa usar estruturas de repetição ainda. Exemplo:
N: 5.
Imprime: 3, 4, 5, 6, 7;
*/

int main () {

     int num;

    printf("Digite um número:  ");
    scanf("%d", &num);

    printf("%d, %d, %d, %d, %d\n", num - 2, num - 1, num, num + 1, num + 2);

    return 0;
    
}
#include <stdio.h>

/*

01) Escreva um programa em C para exibir o padrão como triângulo de ângulo reto usando um asterisco. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo: N=4.

*
**
***
****


*/

int main() {
    int altura;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

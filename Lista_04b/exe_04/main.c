#include <stdio.h>

/*

04) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com número aumentado de 1 em 1. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo: N=4.

1
2 3
4 5 6
7 8 9 10

*/

int main() {
    int altura;
    int numero = 1;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }
    
    return 0;
}

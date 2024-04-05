#include <stdio.h>

/*

003) Escreva um programa em C para fazer um padrão como triângulo de ângulo reto com um número que repetirá um número em uma linha. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo: N=4.

1
22
333
4444


*/

int main() {
    int altura;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}


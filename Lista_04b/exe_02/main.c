#include <stdio.h>

/*

02) Escreva um programa em C para exibir o padrão como um triângulo de ângulo reto com um número. O usuário decide a altura do triângulo fornecendo um número inteiro. Exemplo: N=4.

1
12
123
1234

*/

int main() {
    int altura;
    
    printf("Digite a altura do triângulo: ");
    scanf("%d", &altura);
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}


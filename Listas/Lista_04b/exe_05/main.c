#include <stdio.h>

// Função para contar o número de dígitos em um número
int contarDigitos(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int altura;
    int numero = 1;
    
    printf("Digite a altura da pirâmide: ");
    scanf("%d", &altura);
    
    for (int i = 1; i <= altura; i++) {
        // Calcular o número de espaços em branco necessários
        int numDigitosUltimoNumero = contarDigitos(numero + i - 1);
        int espacosEmBranco = altura - i;

        // Imprimir os espaços em branco
        for (int i = 1; i <= espacosEmBranco; i++) {
            printf(" ");
        }

        // Imprimir os números aumentados de 1 em 1
        for (int j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}

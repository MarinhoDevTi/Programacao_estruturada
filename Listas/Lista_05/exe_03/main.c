#include <stdio.h>

/*
03) Preencher um vetor A com os números pares do número 2 ao 20. Preencher um vetor B com os números de 10 a 19. 
Somar os vetores acima (A[0] + B[0], A[1] + B[1], A[2] +  B[2], …). Imprimir os dois vetores (A e B)  e o vetor 
resultado da soma (A+B).
*/

int main() {
    // Preenchendo o vetor A com os números pares de 2 a 20
    int A[10];
    int numero_par = 2;
    for (int i = 0; i < 10; i++) {
        A[i] = numero_par;
        numero_par += 2;
    }

    // Preenchendo o vetor B com os números de 10 a 19
    int B[10];
    int numero_B = 10;
    for (int i = 0; i < 10; i++) {
        B[i] = numero_B++;
    }

    // Somando os vetores A e B e armazenando o resultado em um terceiro vetor
    int resultado[10];
    for (int i = 0; i < 10; i++) {
        resultado[i] = A[i] + B[i];
    }

    // Imprimindo os vetores A, B e o resultado da soma
    printf("Vetor A (números pares de 2 a 20):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Vetor B (números de 10 a 19):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Resultado da soma de A e B:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

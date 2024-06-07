/*
01) Faça um procedimento que receba três números inteiros (start, stop, step) e imprima a sequência de números uniformemente espaçados dentro do intervalo especificado. Exemplo:
//start=2, stop=3, step=5 (o intervalo começa com 2, termina com 3, possui 5 valores)
procedimento(2, 3, 5); 
>> 2.0, 2.25, 2.5, 2.75, 3.0
*/
#include <stdio.h>

void imprimir_sequencia(int start, int stop, int step) {
    // Calcular o incremento entre os números da sequência
    double incremento = (double)(stop - start) / (step - 1);
    // Gerar e imprimir a sequência
    for (int i = 0; i < step; i++) {
        printf("%.2f", start + i * incremento);
        if (i < step - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    // Teste do procedimento com os valores fornecidos
    imprimir_sequencia(2, 3, 5);
    return 0;
}



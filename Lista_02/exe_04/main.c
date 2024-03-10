#include <stdio.h>

int main () {

    //declaração de variaveis
    float C = 0;
    float F = 0;

    printf("\n");
    printf("Digite os Graus em Farenheit: ");
    scanf("%f", &F);
    printf("\n");

    //processamento ...
    // Converte Fahrenheit para Celsius
  C = (F - 32) * 5 / 9;


    printf("%.2f Farenheit equivalem a %.2f Celsius !\n", F, C);
    printf("\n");
    return 0;
    
}
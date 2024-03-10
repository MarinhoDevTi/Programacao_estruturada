#include <stdio.h>

/*03) Faça um código que receba uma temperatura em Celsius e converta para Farenheit. C = (5 * (F - 32) / 9).
*/

int main () {

    //declaração de variaveis
    float C = 0;
    float F = 0;

    printf("\n");
    printf("Digite os Graus em Celsius: ");
    scanf("%f", &C);
    printf("\n");

    //processamento ...
    //converte Celsius em Fahrenheit:
    F = (C * 9/5) + 32;



    printf("%.2f Celsius equivalem a %.2f Farenheit !\n", C, F);
    printf("\n");

    
}
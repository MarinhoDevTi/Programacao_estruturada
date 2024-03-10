#include <stdio.h>
#include <math.h>

/*
05) Faça um código que receba do usuário dois números (n1 e n2) e um número real (d1), calcule e mostre:

* O produto do dobro do primeiro com metade do segundo;
* A soma do triplo do primeiro com o terceiro;
* O terceiro elevado ao cubo.

*/

int main () {
    
    //declaração de variavies
    float n1, n2, d1 = 0;
    float prod, soma, cubo;


    printf("Olá Digite 2 numeros inteiros e 1 real: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &d1);
    printf("\n");

    //O produto do dobro do primeiro com metade do segundo
    prod = (2 * n1) * (n2 /2 );
    
    //A soma do triplo do primeiro com o terceiro;
    soma = (3 * n1) + d1;
    cubo = d1 * d1 * d1;

    //impressão dos resultados 
    printf("O produto do dobro do primeiro com metade do segundo é %.2f\n", prod);
    printf("\n");

    printf("A soma do triplo do primeiro com o terceiro é %.2f\n", soma);
    printf("\n");

    printf("O terceiro elevado ao cubo é %.2f\n", cubo);
    printf("\n");

    return 0;


}
#include <stdio.h>

/*

09) Fazer um programa que receba um número inteiro, e verifique se ele está entre 100 e 200. Se estiver dentro desta faixa, imprima “Você digitou um número entre 100 e 200”, senão imprima “Você digitou um número fora da faixa”.

*/
int main () {

// declaração de variaveis 
int num = 0; 

printf ("Digite um número inteiro: ");
scanf("%d", &num);

if ( num >=100 ) && ( num <= 200 ) {
     printf ("Você Digitou um número entre 100            e 200");
    
}
else {
     printf ("Você digitou um número fora da faixa".");
}

return 0;
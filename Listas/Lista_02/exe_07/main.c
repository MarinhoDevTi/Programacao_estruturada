#include <stdio.h>
#include <math.h>

/*07) Faça um programa para uma loja de tintas. 
O programa deverá pedir o tamanho em metros 
quadrados da área a ser pintada. Considere que a 
cobertura da tinta é de 1 litro para cada 3 metros 
quadrados e que a tinta é vendida em latas de 18 litros, 
que custam R$ 80,00. Informe a quantidade de latas de tinta 
a serem compradas e o preço total.*/

#define COBERTURA_POR_LITRO 3
#define TAMANHO_LATA 18
#define PRECO_LATA 80.0

int main() {
    float tamanho_area, quantidade_litros, quantidade_latas, preco_total;

    // Solicita ao usuário o tamanho da área a ser pintada em metros quadrados
    printf("Digite o tamanho da área a ser pintada (em metros quadrados): ");
    scanf("%f", &tamanho_area);

    // Calcula a quantidade de litros necessários
    quantidade_litros = (tamanho_area / COBERTURA_POR_LITRO);

    // Calcula a quantidade de latas necessárias
    quantidade_latas = (quantidade_litros / TAMANHO_LATA);

    // Calcula o preço total
    preco_total = quantidade_latas * PRECO_LATA;

    // Exibe os resultados
    printf("\n");
    printf("Quantidade de latas de tinta necessárias: %.0f\n", quantidade_latas);
    printf("Preço total: R$ %.2f\n", preco_total);

    return 0;
    
}

#include <stdio.h>

/*
01) Faça um programa que calcule o preço de skins da loja Rito Gomes. 
As skins custam R$ 1,30 cada se forem compradas menos de dez skins, 
e R$ 1,00 se forem compradas dez ou mais skins. Escreva um programa 
que leia o número de skins compradas, calcule e escreva o custo total 
da compra.
*/

int main() {
    int numero_de_skins;
    float custo_por_skin;
    float custo_total;

    // Solicita ao usuário o número de skins compradas
    printf("Digite o número de skins compradas: ");
    scanf("%d", &numero_de_skins);

    // Verifica o custo por skin com base na quantidade comprada
    if (numero_de_skins < 10) {
        custo_por_skin = 1.30; // Se comprado menos de dez skins
    } else {
        custo_por_skin = 1.00; // Se comprado dez ou mais skins
    }

    // Calcula o custo total da compra
    custo_total = numero_de_skins * custo_por_skin;

    // Exibe o custo total da compra
    printf("O custo total da compra é: R$ %.2f\n", custo_total);

    return 0;
    
}


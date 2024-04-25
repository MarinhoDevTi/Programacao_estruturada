#include <stdio.h>

/*06) Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: 
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$ ...
- IR (11%) : R$ ...
- INSS (8%) : R$ ...
- Sindicato ( 5%) : R$ ...
= Salário Liquido : R$ ...


Obs.: Salário Bruto – Descontos = Salário Líquido
*/

int main () {

    //Declaração de variaveis ...
    float valor_hora, horas_trabalhadas;
    float salario_bruto, desconto_ir, desconto_inss, desconto_sindicato, salario_liquido;
    float valor_desconto_ir, valor_desconto_inss, valor_desconto_sindicato;

    //Solicita ao usuário o valor ganho por hora e o número de horas trabalhadas 
    printf("Digite o valor ganho por hora: ");
    scanf("%f", &valor_hora);
    printf("Digite o número  de horas trabalhadas no mês: ");
    scanf("%f", &horas_trabalhadas);

    // Calcula o salário bruto
    salario_bruto = valor_hora * horas_trabalhadas;

    // Calcula os descontos
    desconto_ir = 0.11 * salario_bruto;
    desconto_inss = 0.08 * salario_bruto;
    desconto_sindicato = 0.05 * salario_bruto;

    // Calcula o salário líquido 
    salario_liquido = salario_bruto - desconto_ir - desconto_inss - desconto_sindicato;

    //Impressão de valores:
    printf("\n");
    printf("+-------------------------------+\n");
    printf("|+ Salário Bruto :   R$ %.2f|\n", salario_bruto);
    printf("|- IR (11%%) :         R$ %.2f|\n", desconto_ir);
    printf("|- INSS (8%%) :        R$ %.2f|\n", desconto_inss);
    printf("|- Sindicato (5%%) :    R$ %.2f|\n", desconto_sindicato);
    printf("|= Salário Líquido :  R$ %.2f|\n", salario_liquido);
    printf("+-------------------------------+");

    return 0;

    
}
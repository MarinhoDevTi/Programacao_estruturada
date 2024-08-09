#include <stdio.h>
#include <math.h>

// Definição da constante e
#define E 2.71828

// Função de ativação Degrau
double funcao_degrau(double x) {
    return x >= 0 ? 1 : 0;
}

// Função de ativação Logística (Sigmóide)
double funcao_sigmoide(double x) {
    return 1 / (1 + pow(E, -x));
}

// Função de ativação Tangente Hiperbólica
double funcao_tangente_hiperbolica(double x) {
    return (pow(E, x) - pow(E, -x)) / (pow(E, x) + pow(E, -x));
}

// Função de ativação Sigmóide Linear
double funcao_sigmoide_linear(double x) {
    return x / (1 + fabs(x));
}

// Função de ativação Gaussiana
double funcao_gaussiana(double x) {
    return pow(E, -pow(x, 2));
}

int main() {
    double x;

    printf("Digite o valor de entrada x: ");
    scanf("%lf", &x);

    printf("Função Degrau: %.2f\n", funcao_degrau(x));
    printf("Função Sigmóide: %.2f\n", funcao_sigmoide(x));
    printf("Função Tangente Hiperbólica: %.2f\n", funcao_tangente_hiperbolica(x));
    printf("Função Sigmóide Linear: %.2f\n", funcao_sigmoide_linear(x));
    printf("Função Gaussiana: %.2f\n", funcao_gaussiana(x));

    return 0;
}

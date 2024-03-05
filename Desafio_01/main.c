#include <stdio.h>

int main() {
    double distancia_km, velocidade_luz_ms;
    double tempo_segundos, tempo_minutos, tempo_horas;

    // Solicitar ao usuário que insira a distância entre dois planetas em quilômetros
    printf("Digite a distância entre dois planetas em quilômetros: ");
    scanf("%lf", &distancia_km);

    // Definir a velocidade da luz em metros por segundo
    velocidade_luz_ms = 299792458.0;

    // Calcular o tempo que levaria para viajar entre os dois planetas na velocidade da luz
    tempo_segundos = (distancia_km * 1000) / velocidade_luz_ms;
    tempo_minutos = tempo_segundos / 60;
    tempo_horas = tempo_minutos / 60;

    // Imprimir o tempo em segundos, minutos e horas
    printf("Tempo para viajar na velocidade da luz:\n");
    printf("Segundos: %lf\n", tempo_segundos);
    printf("Minutos: %lf\n", tempo_minutos);
    printf("Horas: %lf\n", tempo_horas);

    return 0;
}

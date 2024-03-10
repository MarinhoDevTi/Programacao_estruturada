#include <stdio.h>

/* 08) Faça um programa que peça o tamanho de 
um arquivo para download (em MB) e a velocidade de 
um link de Internet (em Mbps), calcule e informe o tempo
 aproximado de download do arquivo usando este link (em minutos).
*/

float calcular_tempo_download(float tamanho_arquivo_mb, float velocidade_internet_mbps) {
    // Convertendo a velocidade de Mbps para MBps
    float velocidade_mbps_para_mbps = velocidade_internet_mbps / 8;
    // Calculando o tempo de download em segundos
    float tempo_download_segundos = tamanho_arquivo_mb / velocidade_mbps_para_mbps;
    // Convertendo para minutos
    float tempo_download_minutos = tempo_download_segundos / 60;
    return tempo_download_minutos;
}


int main() {
    float tamanho_arquivo_mb, velocidade_internet_mbps;
    
    printf("Digite o tamanho do arquivo para download (em MB): ");
    scanf("%f", &tamanho_arquivo_mb);

    printf("Digite a velocidade do link de Internet (em Mbps): ");
    scanf("%f", &velocidade_internet_mbps);

    float tempo_download_minutos = calcular_tempo_download(tamanho_arquivo_mb, velocidade_internet_mbps);

    printf("O tempo aproximado de download do arquivo é de: %.2f minutos.\n", tempo_download_minutos);

    return 0;
}
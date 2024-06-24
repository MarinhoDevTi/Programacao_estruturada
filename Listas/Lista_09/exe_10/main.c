#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um número aleatório dentro de um intervalo
int rand_intervalo(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Função principal do programa
int main() {
    // Inicializa o gerador de números aleatórios com o valor atual do tempo
    srand(time(NULL));

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abre (ou cria) o arquivo "imagem_colorida.ppm" no modo de escrita ("w")
    arquivo = fopen("imagem_colorida.ppm", "w");

    // Verifica se o arquivo foi criado/aberto com sucesso
    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Escreve o cabeçalho do arquivo PPM
        fprintf(arquivo, "P3\n"); // Formato do arquivo PPM (texto, colorido)
        fprintf(arquivo, "#imagem_colorida.ppm\n"); // Comentário com o nome do arquivo
        fprintf(arquivo, "60 100\n"); // Dimensões da imagem (60 colunas x 100 linhas)
        fprintf(arquivo, "255\n"); // Valor máximo de cor (RGB)

        // Preenchimento da imagem com pixels aleatórios nos intervalos especificados
        int i, j;
        int r, g, b;

        for (i = 0; i < 100; i++) { // Loop pelas linhas da imagem
            if (i >= 0 && i < 20) {
                // Linhas 0-19: Pixels entre 0 e 55 (tom de cor mais escuro)
                r = rand_intervalo(0, 55);
                g = rand_intervalo(0, 55);
                b = rand_intervalo(0, 55);
            } else if (i >= 20 && i < 40) {
                // Linhas 20-39: Pixels entre 45 e 105 (tom de cor intermediário)
                r = rand_intervalo(45, 105);
                g = rand_intervalo(45, 105);
                b = rand_intervalo(45, 105);
            } else if (i >= 40 && i < 60) {
                // Linhas 40-59: Pixels entre 95 e 155 (tom de cor mais claro)
                r = rand_intervalo(95, 155);
                g = rand_intervalo(95, 155);
                b = rand_intervalo(95, 155);
            } else if (i >= 60 && i < 80) {
                // Linhas 60-79: Pixels entre 145 e 205 (outra tonalidade)
                r = rand_intervalo(145, 205);
                g = rand_intervalo(145, 205);
                b = rand_intervalo(145, 205);
            } else {
                // Linhas 80-99: Pixels entre 195 e 255 (outra tonalidade)
                r = rand_intervalo(195, 255);
                g = rand_intervalo(195, 255);
                b = rand_intervalo(195, 255);
            }

            // Escreve os valores RGB no arquivo para cada pixel da linha atual
            for (j = 0; j < 60; j++) {
                fprintf(arquivo, "%d %d %d ", r, g, b);
            }
            fprintf(arquivo, "\n"); // Nova linha após preencher uma linha completa
        }

        // Fecha o arquivo
        fclose(arquivo);

    } else {
        // Se houver um erro ao abrir o arquivo, imprime uma mensagem de erro
        printf("Erro ao criar o arquivo.\n");
        return 1; // Retorna 1 indicando que houve um erro
    }

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}

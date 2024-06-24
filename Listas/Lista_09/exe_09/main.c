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

    // Abre (ou cria) o arquivo "imagem_aleatoria.pgm" no modo de escrita ("w")
    arquivo = fopen("imagem_aleatoria.pgm", "w");

    // Verifica se o arquivo foi criado/aberto com sucesso
    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Escreve o cabeçalho do arquivo PGM
        fprintf(arquivo, "P2\n"); // Formato do arquivo PGM (texto, grayscale)
        fprintf(arquivo, "#imagem_aleatoria.pgm\n"); // Comentário com o nome do arquivo
        fprintf(arquivo, "60 100\n"); // Dimensões da imagem (60 colunas x 100 linhas)
        fprintf(arquivo, "255\n"); // Valor máximo de cinza

        // Preenchimento da imagem com pixels aleatórios nos intervalos especificados
        int i, j, valor;

        for (i = 0; i < 100; i++) { // Loop pelas linhas da imagem
            if (i >= 0 && i < 20) {
                // Linhas 0-19: Pixels entre 0 e 55
                for (j = 0; j < 60; j++) {
                    valor = rand_intervalo(0, 55);
                    fprintf(arquivo, "%d ", valor);
                }
            } else if (i >= 20 && i < 40) {
                // Linhas 20-39: Pixels entre 45 e 105
                for (j = 0; j < 60; j++) {
                    valor = rand_intervalo(45, 105);
                    fprintf(arquivo, "%d ", valor);
                }
            } else if (i >= 40 && i < 60) {
                // Linhas 40-59: Pixels entre 95 e 155
                for (j = 0; j < 60; j++) {
                    valor = rand_intervalo(95, 155);
                    fprintf(arquivo, "%d ", valor);
                }
            } else if (i >= 60 && i < 80) {
                // Linhas 60-79: Pixels entre 145 e 205
                for (j = 0; j < 60; j++) {
                    valor = rand_intervalo(145, 205);
                    fprintf(arquivo, "%d ", valor);
                }
            } else {
                // Linhas 80-99: Pixels entre 195 e 255
                for (j = 0; j < 60; j++) {
                    valor = rand_intervalo(195, 255);
                    fprintf(arquivo, "%d ", valor);
                }
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

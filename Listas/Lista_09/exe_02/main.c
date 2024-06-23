/*
02) Crie um arquivo com o nome "imagem2.pgm". O conteúdo desse a
rquivo deve ser exatamente como orientado. Primeira linha: P2.
 Segunda linha: #imagem2.pgm. Terceira linha: 100 100. Quarta 
 linha: 255. A partir da quinta linha: Gere uma matriz 100x100 
 com números aleatórios entre 0 e 255.
P2
#imagem2.pgm
100 100
255
50 23 14 123 … 45
11 78 84 79  … 100

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função principal do programa
int main() {
    // Inicializa o gerador de números aleatórios com o valor atual do tempo
    srand(time(NULL));

    // Declaração das variáveis
    int i, j; // Contadores para os loops
    int matriz[100][100]; // Matriz 100x100 para armazenar os números aleatórios

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abre (ou cria) o arquivo "imagem2.pgm" no modo de escrita ("w")
    arquivo = fopen("imagem2.pgm", "w");

    // Verifica se o arquivo foi criado/aberto com sucesso
    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Preenche a matriz 100x100 com números aleatórios entre 0 e 255
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 100; j++) {
                matriz[i][j] = rand() % 256;
            }
        }

        // Escreve o cabeçalho do arquivo PGM
        fprintf(arquivo, "P2\n"); // Formato do arquivo PGM (texto, grayscale)
        fprintf(arquivo, "#imagem2.pgm\n"); // Comentário com o nome do arquivo
        fprintf(arquivo, "100 100\n"); // Dimensões da imagem (100 x 100)
        fprintf(arquivo, "255\n"); // Valor máximo de cinza

        // Escreve a matriz no arquivo, linha por linha
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 100; j++) {
                fprintf(arquivo, "%d ", matriz[i][j]);
            }
            fprintf(arquivo, "\n"); // Adiciona uma nova linha após cada linha da matriz
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

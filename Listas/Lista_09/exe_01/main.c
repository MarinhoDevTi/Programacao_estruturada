/*

01) Crie um arquivo com o nome "imagem.pbm". O conteúdo desse arquivo deve ser exatamente como orientado. Primeira linha: P1. Segunda linha: #imagem.pbm. Terceira linha: 100 100. A partir da quarta linha: Gere uma matriz 100x100 com números inteiros aleatórios entre 0 e 1.
P1
#imagem.pbm
100 100
0 0 0 1 … 0
1 0 0 1 … 1
…
Visualize o arquivo para conferir se deu certo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int i, j;
    int matriz[100][100];

    FILE *arquivo;

    arquivo = fopen("imagem.pbm", "w");

    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Gerando a matriz 100x100 com números aleatórios entre 0 e 1
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 100; j++) {
                matriz[i][j] = rand() % 2;
            }
        }

        // Escrevendo o cabeçalho do arquivo PBM
        fprintf(arquivo, "P1\n");
        fprintf(arquivo, "#imagem.pbm\n");
        fprintf(arquivo, "100 100\n");

        // Escrevendo a matriz no arquivo
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 100; j++) {
                fprintf(arquivo, "%d ", matriz[i][j]);
            }
            fprintf(arquivo, "\n");
        }

        fclose(arquivo);

    } else {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    return 0;
}

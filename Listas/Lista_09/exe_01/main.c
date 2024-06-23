// Para compilar codigos em C no VSCode
// No terminal digite: gcc codigo.c -o codigo.exe
// Para Rodar, digite no terminal: ./codigo.exe

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

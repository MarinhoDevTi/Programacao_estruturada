#include <stdio.h>

int main() {
    // Define o labirinto 11x11 com base na imagem fornecida
    int labirinto[11][11] = {
        /*1*/  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        /*2*/  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        /*3*/  {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        /*4*/  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        /*5*/  {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        /*6*/  {0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
        /*7*/  {1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
        /*8*/  {1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1},
        /*9*/  {1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        /*10*/ {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        /*11*/ {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
        /*     1  2  3  4  5  6  7  8  9  10 11*/
    };

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abre (ou cria) o arquivo "labirinto.pbm" no modo de escrita ("w")
    arquivo = fopen("labirinto.pbm", "w");

    // Verifica se o arquivo foi criado/aberto com sucesso
    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Escreve o cabeçalho do arquivo PBM
        fprintf(arquivo, "P1\n"); // Formato do arquivo PBM (texto, bitmap)
        fprintf(arquivo, "#labirinto.pbm\n"); // Comentário com o nome do arquivo
        fprintf(arquivo, "11 11\n"); // Dimensões da imagem (11 x 11)

        // Escreve o labirinto no arquivo, linha por linha
        for (int i = 0; i < 11; i++) {
            for (int j = 0; j < 11; j++) {
                fprintf(arquivo, "%d ", labirinto[i][j]);
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

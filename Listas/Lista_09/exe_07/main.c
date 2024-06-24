#include <stdio.h>
#include <stdlib.h>

// Função principal do programa
int main() {
    // Declaração das variáveis
    int i, j; // Contadores para os loops
    int valor; // Valor do tom de cinza

    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abre (ou cria) o arquivo "imagem.pgm" no modo de escrita ("w")
    arquivo = fopen("imagem.pgm", "w");

    // Verifica se o arquivo foi criado/aberto com sucesso
    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Escreve o cabeçalho do arquivo PGM
        fprintf(arquivo, "P2\n"); // Formato do arquivo PGM (texto, grayscale)
        fprintf(arquivo, "#imagem.pgm\n"); // Comentário com o nome do arquivo
        fprintf(arquivo, "100 256\n"); // Dimensões da imagem (100 colunas x 256 linhas)
        fprintf(arquivo, "255\n"); // Valor máximo de cinza

        // Preenche a matriz 256x100 com valores de 0 a 255
        for (i = 0; i < 256; i++) {
            valor = i; // Valor do tom de cinza, variando de 0 a 255
            for (j = 0; j < 100; j++) {
                fprintf(arquivo, "%d ", valor);
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

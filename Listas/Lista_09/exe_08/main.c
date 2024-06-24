#include <stdio.h>

// Função principal do programa
int main() {
    // Ponteiro para o arquivo
    FILE *arquivo;

    // Abre (ou cria) o arquivo "imagem_tons.pgm" no modo de escrita ("w")
    arquivo = fopen("imagem_tons.pgm", "w");

    // Verifica se o arquivo foi criado/aberto com sucesso
    if (arquivo != NULL) {
        printf("Arquivo criado com sucesso\n");

        // Escreve o cabeçalho do arquivo PGM
        fprintf(arquivo, "P2\n"); // Formato do arquivo PGM (texto, grayscale)
        fprintf(arquivo, "#imagem_tons.pgm\n"); // Comentário com o nome do arquivo
        fprintf(arquivo, "60 100\n"); // Dimensões da imagem (60 colunas x 100 linhas)
        fprintf(arquivo, "255\n"); // Valor máximo de cinza

        // Definição dos tons de cinza
        int tons_cinza[] = {0, 64, 128, 192, 255};
        int altura_bloco = 20;
        int largura_bloco = 60;
        int i, j, k;

        // Loop para preencher a imagem com os blocos de tons de cinza
        for (i = 0; i < 5; i++) { // Para cada tom de cinza
            for (j = 0; j < altura_bloco; j++) { // Preenche as linhas do bloco atual
                for (k = 0; k < largura_bloco; k++) { // Preenche as colunas do bloco atual
                    fprintf(arquivo, "%d ", tons_cinza[i]);
                }
                fprintf(arquivo, "\n"); // Nova linha após preencher uma linha completa
            }
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

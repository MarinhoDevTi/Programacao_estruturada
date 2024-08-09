#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar informações da imagem PPM
typedef struct {
    char formato[3];  // Deve ser "P6" para imagem colorida
    int largura;
    int altura;
    int max_valor;    // Valor máximo de cor (geralmente 255)
    unsigned char *dados;  // Array de pixels RGB
} ImagemPPM;

// Função para carregar uma imagem PPM
ImagemPPM carregar_imagem_ppm(const char* nome_arquivo) {
    FILE *arquivo;
    ImagemPPM imagem;

    // Abre o arquivo PPM
    if ((arquivo = fopen(nome_arquivo, "rb")) == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", nome_arquivo);
        exit(1);
    }

    // Lê o cabeçalho da imagem PPM
    fscanf(arquivo, "%s\n", imagem.formato);
    fscanf(arquivo, "%d %d\n", &imagem.largura, &imagem.altura);
    fscanf(arquivo, "%d\n", &imagem.max_valor);

    // Verifica se a imagem é do tipo P6 (colorida)
    if (strcmp(imagem.formato, "P6") != 0) {
        fprintf(stderr, "Formato de imagem não suportado.\n");
        exit(1);
    }

    // Aloca memória para armazenar os dados da imagem
    imagem.dados = (unsigned char *)malloc(imagem.largura * imagem.altura * 3);

    // Lê os dados da imagem (pixels RGB)
    fread(imagem.dados, 1, imagem.largura * imagem.altura * 3, arquivo);

    // Fecha o arquivo
    fclose(arquivo);

    return imagem;
}

// Função para salvar uma imagem PPM
void salvar_imagem_ppm(const char* nome_arquivo, ImagemPPM imagem) {
    FILE *arquivo;

    // Abre o arquivo de saída PPM
    if ((arquivo = fopen(nome_arquivo, "wb")) == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo %s\n", nome_arquivo);
        exit(1);
    }

    // Escreve o cabeçalho da imagem PPM
    fprintf(arquivo, "%s\n", imagem.formato);
    fprintf(arquivo, "%d %d\n", imagem.largura, imagem.altura);
    fprintf(arquivo, "%d\n", imagem.max_valor);

    // Escreve os dados da imagem (pixels RGB)
    fwrite(imagem.dados, 1, imagem.largura * imagem.altura * 3, arquivo);

    // Fecha o arquivo
    fclose(arquivo);
}

// Função para dividir a imagem em quatro partes
void dividir_imagem(const char* nome_entrada, const char* prefixo_saida) {
    ImagemPPM imagem = carregar_imagem_ppm(nome_entrada);

    // Calcular as dimensões de cada quarto
    int metade_largura = imagem.largura / 2;
    int metade_altura = imagem.altura / 2;

    // Criar e salvar cada quarto da imagem
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            ImagemPPM quarto;
            strcpy(quarto.formato, "P6");
            quarto.largura = metade_largura;
            quarto.altura = metade_altura;
            quarto.max_valor = imagem.max_valor;
            quarto.dados = (unsigned char *)malloc(metade_largura * metade_altura * 3);

            for (int k = 0; k < metade_altura; ++k) {
                for (int l = 0; l < metade_largura; ++l) {
                    int indice_original = ((i * metade_altura + k) * imagem.largura + (j * metade_largura + l)) * 3;
                    int indice_quarto = (k * metade_largura + l) * 3;
                    quarto.dados[indice_quarto] = imagem.dados[indice_original];
                    quarto.dados[indice_quarto + 1] = imagem.dados[indice_original + 1];
                    quarto.dados[indice_quarto + 2] = imagem.dados[indice_original + 2];
                }
            }

            char nome_saida[100];
            sprintf(nome_saida, "%s_quarto_%d_%d.ppm", prefixo_saida, i, j);
            salvar_imagem_ppm(nome_saida, quarto);

            free(quarto.dados);
        }
    }

    free(imagem.dados);
}

// Função principal
int main() {
    dividir_imagem("imagem.ppm", "quarto");

    return 0;
}

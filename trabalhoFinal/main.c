#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funções para cada funcionalidade
void converterEscalaCinza(char *entrada, char *saida);
void espelharHorizontal(char *entrada, char *saida);
void espelharVertical(char *entrada, char *saida);
void dividirHorizontal(char *entrada, char *saida1, char *saida2);
void dividirVertical(char *entrada, char *saida1, char *saida2);
void colorirArtificialmente(char *entrada, char *saida);
void rotacionarDireita(char *entrada, char *saida);
void rotacionarEsquerda(char *entrada, char *saida);
void escalaCinzaParcial(char *entrada, char *saida);
void separarCamadasRGB(char *entrada, char *saidaR, char *saidaG, char *saidaB);

int main() {
    int opcao;
    char entrada[100], saida1[100], saida2[100];

    do {
        printf("Menu de Operações de Imagem\n");
        printf("1. Converter para Escala de Cinza\n");
        printf("2. Espelhar Horizontalmente\n");
        printf("3. Espelhar Verticalmente\n");
        printf("4. Dividir Horizontalmente\n");
        printf("5. Dividir Verticalmente\n");
        printf("6. Colorir Artificialmente\n");
        printf("7. Rotacionar 90 Graus para a Direita\n");
        printf("8. Rotacionar 90 Graus para a Esquerda\n");
        printf("9. Escala de Cinza Parcial\n");
        printf("10. Separar Camadas RGB\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao != 0) {
            printf("Digite o nome do arquivo de entrada (com extensao .ppm): ");
            scanf("%s", entrada);

            if (opcao >= 1 && opcao <= 10 && opcao != 4 && opcao != 5 && opcao != 10) {
                printf("Digite o nome do arquivo de saida (com extensao .ppm): ");
                scanf("%s", saida1);
            } else if (opcao == 4 || opcao == 5) {
                printf("Digite o nome do primeiro arquivo de saida (com extensao .ppm): ");
                scanf("%s", saida1);
                printf("Digite o nome do segundo arquivo de saida (com extensao .ppm): ");
                scanf("%s", saida2);
            } else if (opcao == 10) {
                printf("Digite o nome do arquivo de saida para camada R (com extensao .ppm): ");
                scanf("%s", saida1);
                printf("Digite o nome do arquivo de saida para camada G (com extensao .ppm): ");
                scanf("%s", saida2);
                printf("Digite o nome do arquivo de saida para camada B (com extensao .ppm): ");
                scanf("%s", saida2);
            }

            switch (opcao) {
                case 1:
                    converterEscalaCinza(entrada, saida1);
                    break;
                case 2:
                    espelharHorizontal(entrada, saida1);
                    break;
                case 3:
                    espelharVertical(entrada, saida1);
                    break;
                case 4:
                    dividirHorizontal(entrada, saida1, saida2);
                    break;
                case 5:
                    dividirVertical(entrada, saida1, saida2);
                    break;
                case 6:
                    colorirArtificialmente(entrada, saida1);
                    break;
                case 7:
                    rotacionarDireita(entrada, saida1);
                    break;
                case 8:
                    rotacionarEsquerda(entrada, saida1);
                    break;
                case 9:
                    escalaCinzaParcial(entrada, saida1);
                    break;
                case 10:
                    separarCamadasRGB(entrada, saida1, saida2, saida2);
                    break;
                default:
                    printf("Opcao invalida!\n");
            }
        }
    } while (opcao != 0);

    return 0;
}

// Função para converter uma imagem colorida para escala de cinza
void converterEscalaCinza(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    fprintf(outfile, "P3\n%d %d\n%d\n", largura, altura, max_valor);

    for (int i = 0; i < largura * altura; i++) {
        int r, g, b;
        fscanf(infile, "%d %d %d", &r, &g, &b);
        int gray = (r + g + b) / 3;
        fprintf(outfile, "%d %d %d ", gray, gray, gray);
    }

    fclose(infile);
    fclose(outfile);
}

// Função para espelhar horizontalmente uma imagem
void espelharHorizontal(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(outfile, "P3\n%d %d\n%d\n", largura, altura, max_valor);

    for (int i = 0; i < altura; i++) {
        for (int j = largura - 1; j >= 0; j--) {
            fprintf(outfile, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    fclose(infile);
    fclose(outfile);
}

// Função para espelhar verticalmente uma imagem
void espelharVertical(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(outfile, "P3\n%d %d\n%d\n", largura, altura, max_valor);

    for (int i = altura - 1; i >= 0; i--) {
        for (int j = 0; j < largura; j++) {
            fprintf(outfile, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    fclose(infile);
    fclose(outfile);
}

// Função para dividir uma imagem horizontalmente em dois arquivos
void dividirHorizontal(char *entrada, char *saida1, char *saida2) {
    FILE *infile = fopen(entrada, "r");
    FILE *out1 = fopen(saida1, "w");
    FILE *out2 = fopen(saida2, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int metade = altura / 2;
    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(out1, "P3\n%d %d\n%d\n", largura, metade, max_valor);
    fprintf(out2, "P3\n%d %d\n%d\n", largura, altura - metade, max_valor);

    for (int i = 0; i < metade; i++) {
        for (int j = 0; j < largura; j++) {
            fprintf(out1, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    for (int i = metade; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fprintf(out2, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    fclose(infile);
    fclose(out1);
    fclose(out2);
}

// Função para dividir uma imagem verticalmente em dois arquivos
void dividirVertical(char *entrada, char *saida1, char *saida2) {
    FILE *infile = fopen(entrada, "r");
    FILE *out1 = fopen(saida1, "w");
    FILE *out2 = fopen(saida2, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int metade = largura / 2;
    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(out1, "P3\n%d %d\n%d\n", metade, altura, max_valor);
    fprintf(out2, "P3\n%d %d\n%d\n", largura - metade, altura, max_valor);

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < metade; j++) {
            fprintf(out1, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    for (int i = 0; i < altura; i++) {
        for (int j = metade; j < largura; j++) {
            fprintf(out2, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    fclose(infile);
    fclose(out1);
    fclose(out2);
}

// Função para colorir artificialmente uma imagem
void colorirArtificialmente(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    fprintf(outfile, "P3\n%d %d\n%d\n", largura, altura, max_valor);

    srand(time(NULL));

    for (int i = 0; i < largura * altura; i++) {
        int r, g, b;
        fscanf(infile, "%d %d %d", &r, &g, &b);
        int gray = (r + g + b) / 3;
        r = gray * (rand() % 2);
        g = gray * (rand() % 2);
        b = gray * (rand() % 2);
        fprintf(outfile, "%d %d %d ", r, g, b);
    }

    fclose(infile);
    fclose(outfile);
}

// Função para rotacionar uma imagem 90 graus para a direita
void rotacionarDireita(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(outfile, "P3\n%d %d\n%d\n", altura, largura, max_valor);

    for (int j = 0; j < largura; j++) {
        for (int i = altura - 1; i >= 0; i--) {
            fprintf(outfile, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    fclose(infile);
    fclose(outfile);
}

// Função para rotacionar uma imagem 90 graus para a esquerda
void rotacionarEsquerda(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(outfile, "P3\n%d %d\n%d\n", altura, largura, max_valor);

    for (int j = largura - 1; j >= 0; j--) {
        for (int i = 0; i < altura; i++) {
            fprintf(outfile, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
        }
    }

    fclose(infile);
    fclose(outfile);
}

// Função para gerar uma imagem cópia com parte em escala de cinza
void escalaCinzaParcial(char *entrada, char *saida) {
    FILE *infile = fopen(entrada, "r");
    FILE *outfile = fopen(saida, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    int matriz[altura][largura][3];

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            fscanf(infile, "%d %d %d", &matriz[i][j][0], &matriz[i][j][1], &matriz[i][j][2]);
        }
    }

    fprintf(outfile, "P3\n%d %d\n%d\n", largura, altura, max_valor);

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            if (i < altura / 2) { // Metade superior em escala de cinza
                int gray = (matriz[i][j][0] + matriz[i][j][1] + matriz[i][j][2]) / 3;
                fprintf(outfile, "%d %d %d ", gray, gray, gray);
            } else {
                fprintf(outfile, "%d %d %d ", matriz[i][j][0], matriz[i][j][1], matriz[i][j][2]);
            }
        }
    }

    fclose(infile);
    fclose(outfile);
}

// Função para separar as camadas RGB de uma imagem
void separarCamadasRGB(char *entrada, char *saidaR, char *saidaG, char *saidaB) {
    FILE *infile = fopen(entrada, "r");
    FILE *outR = fopen(saidaR, "w");
    FILE *outG = fopen(saidaG, "w");
    FILE *outB = fopen(saidaB, "w");

    if (infile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    int largura, altura, max_valor;
    fscanf(infile, "P3\n%d %d\n%d\n", &largura, &altura, &max_valor);

    fprintf(outR, "P3\n%d %d\n%d\n", largura, altura, max_valor);
    fprintf(outG, "P3\n%d %d\n%d\n", largura, altura, max_valor);
    fprintf(outB, "P3\n%d %d\n%d\n", largura, altura, max_valor);

    for (int i = 0; i < largura * altura; i++) {
        int r, g, b;
        fscanf(infile, "%d %d %d", &r, &g, &b);
        fprintf(outR, "%d %d %d ", r, 0, 0);
        fprintf(outG, "%d %d %d ", 0, g, 0);
        fprintf(outB, "%d %d %d ", 0, 0, b);
    }

    fclose(infile);
    fclose(outR);
    fclose(outG);
    fclose(outB);
}

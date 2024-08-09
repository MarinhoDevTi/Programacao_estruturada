//Uma imagem 100x100 fundo cinza claro, uma linha preta na diagonal. Escala de cinza.
#include<stdio.h>
#include<time.h>

int main(){
    int i, j;
    int matriz[100][100];

    FILE *arquivo;

    arquivo = fopen("imagem.pgm", "w");

    if(arquivo != NULL){
        printf("Arquivo aberto com sucesso.\n");
        for(i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                if (i == j){
                    matriz[i][j] = 0;
                } else {
                    matriz[i][j] = 225;
                }
            }
        }
        fprintf(arquivo, "P2\n");
        fprintf(arquivo, "\n");
        fprintf(arquivo, "%d %d \n", 100, 100);
        fprintf(arquivo, "%d \n", 255);
        for(i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                fprintf(arquivo, "%d ", matriz[i][j]);
            }
        }
        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    return 0;
}
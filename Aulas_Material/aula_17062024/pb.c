//Uma imagem P&B, 200x100, metade da direita preta, metade da esquerda branca.

#include<stdio.h>

int main(){
    int i, j;
    int matriz[100][200];
    FILE *arquivo;
    arquivo = fopen("chinelinho.pbm", "w");

    if(arquivo != NULL){
        printf("Arquivo aberto com sucesso.\n");
        for(i=0;i<100;i++){
            for(j=0;j<200;j++){
                if((i==0) || (i==99)){
                    matriz[i][j] = 1;
                } else {
                    if(j<100){
                        matriz[i][j] = 1;
                    } else if(j==199) {
                        matriz[i][j] = 1;
                    } else {
                        matriz[i][j] = 0;
                    }
                }
            }
        }
        fprintf(arquivo, "P1\n");
        fprintf(arquivo, "# Criado por André\n");
        fprintf(arquivo, "%d %d \n", 200, 100);
        for(i=0;i<100;i++){
            for(j=0;j<200;j++){
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
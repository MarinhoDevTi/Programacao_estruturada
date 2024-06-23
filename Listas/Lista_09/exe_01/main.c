
#include <stdio.h>

int main(){
    srand(time(NULL));
    int i, j, k, n;
    int matriz[100][100];

    FILE *arquivo;

    arquivo = fopen("imagem.pbm", "w");

    if(arquivo != NULL){
        printf("Arquivo criado com sucesso\n");
        for (i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                //for( k = 0; k < 3; k ++){
                    n = rand() % 2;
                    matriz [i][j] = n;
                }
            }
        }

        fprintf(arquivo, "P1\n");
        fprintf(arquivo, "#imagem.pbm \n");
        fprintf(arquivo, "%d %d\n", 100, 100);
        //fprintf(arquivo, "%d\n", 255);
        for (i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                for( k = 0; k < 3; k++ ){
                    fprintf(arquivo, "%d ", matriz[i][j]);
                }
            }
        }
        fclose(arquivo);

    } else {
        printf("Erro ao criar o arquivo.\n ");
        return 0;
    }




    
    
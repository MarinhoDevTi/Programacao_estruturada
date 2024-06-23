/*
03) Crie um arquivo com o nome "imagem3.ppm". O conteúdo 
desse arquivo deve ser exatamente como orientado. 
Primeira linha: P3. Segunda linha: #imagem3.ppm. 
Terceira linha: 100 100. Quarta linha: 255. 
A partir da quinta linha: Gere uma matriz 100x300 
com números aleatórios entre 0 e 255.
P3
#imagem3.ppm
100 100
255
250 123 14 123 … 245
211 178 84 179  … 100
…

*/
#include <stdio.h>

int main(){
    srand(time(NULL));
    int i, j, k, n;
    int matriz[100][300][3];

    FILE *arquivo;

    arquivo = fopen("imagem3.ppm", "w");

    if(arquivo != NULL){
        printf("Arquivo criado com sucesso\n");
        for (i = 0; i < 100; i++){
            for(j = 0; j < 300; j++){
                for( k = 0; k < 3; k ++){
                    n = rand() % 256;
                    matriz [i][j][k] = n;
                }
            }
        }

        fprintf(arquivo, "P3\n");
        fprintf(arquivo, "# Criado por Diogo\n");
        fprintf(arquivo, "%d %d\n", 100, 100);
        fprintf(arquivo, "%d\n", 255);
        for (i = 0; i < 100; i++){
            for(j = 0; j < 300; j++){
                for( k = 0; k < 3; k++ ){
                    fprintf(arquivo, "%d ", matriz[i][j][k]);
                }
            }
        }
        fclose(arquivo);

    } else {
        printf("Erro ao criar o arquivo.\n ");
        return 0;
    }

}


    
    
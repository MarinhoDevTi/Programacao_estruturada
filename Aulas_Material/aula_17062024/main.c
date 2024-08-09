//Para compilar códigos em C no VSCode
//No terminal digite: gcc codigo.c -o codigo.exe
//Para rodar, digite no terminal: ./codigo.exe

#include<stdio.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int i, j, k, n;
    int matriz[100][100][3];

    FILE *arquivo;

    arquivo = fopen("chinelinho.ppm", "w");

    if(arquivo != NULL){
        printf("Arquivo criado com sucesso!\n");
        for(i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                for(k = 0; k < 3; k++){
                    n = rand() % 256;
                    matriz[i][j][k] = n;
                }
            }
        }

        fprintf(arquivo, "P3\n");
        fprintf(arquivo, "# Criado por André\n");
        fprintf(arquivo, "%d %d\n", 100, 100);
        fprintf(arquivo, "%d\n", 255);
        for(i = 0; i < 100; i++){
            for(j = 0; j < 100; j++){
                for(k = 0; k < 3; k++){
                    fprintf(arquivo, "%d ", matriz[i][j][k]);
                }
            }
        }
        fclose(arquivo);

    }else{
        printf("Erro ao criar o arquivo.\n");
        return 0;
    }

    return 1;

}
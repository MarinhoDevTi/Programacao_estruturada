#include<stdio.h>
#include<time.h>

int main(){
    int largura, altura, valor_maximo;
    //int i, j, k;
    char buffer[255];

    FILE *arquivo;
    FILE *saida;

    arquivo = fopen("imagem.ppm", "r");
    saida   = fopen("imagem.ppm", "w");

    if(arquivo == NULL){
        printf("Erro na abertura do arquivo.\n");
        return 1;
    } else {
        printf("Arquivo aberto com sucesso.\n");
        //Leitura do arquivo de entrada
        fgets(buffer, 255, arquivo);//Lê a primeira linha do arquivo
        printf("%s", buffer);
        fgets(buffer, 255, arquivo);//Lê a segunda linha do arquivo
        printf("%s", buffer);
        fscanf(arquivo, "%d %d", &largura, &altura);//Lê a terceira linha do arquivo
        printf("Largura: %d\nAltura: %d\n", largura, altura);
        int matriz[largura][altura][3];
        fscanf(arquivo, "%d", &valor_maximo);//Lê a quarta linha do arquivo
        for(int i=0;i<largura;i++){
            for(int j=0;j<altura;j++){
                for(int k=0;k<3;k++){
                    fscanf(arquivo, "%d", &matriz[i][j][k]);                    
                }
            }
        }
        printf("%d %d %d", matriz[0][0][0], matriz[0][0][1], matriz[0][0][2]);

        //Escrever a arara cinza em formato PPM P3
        int pixel;
        int soma = 0;
        fprintf(saida, "P3\n");
        fprintf(saida, "\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "255\n");
        for(int i=0;i<largura;i++){
            for(int j=0;j<altura;j++){
                for(int k=0;k<3;k++){
                    soma += matriz[i][j][k];
                    //fprintf(saida, "%d ", 255-matriz[i][j][k]); //Efeito negativo
                }
                pixel = soma/3;
                fprintf(saida, "%d %d %d ", pixel, pixel, pixel);
                soma = 0;
            }
        }

        fclose(arquivo);
        fclose(saida);

    }

    return 0;
}
#include<stdio.h>

int main(){
    FILE *entrada;
    FILE *saida;

    entrada = fopen("araracinza.ppm", "r");
    saida   = fopen("araravirada.ppm", "w");

    int i, j, k;
    int largura, altura, v_max;
    char buffer[255];

    if(entrada == NULL){
        printf("Erro ao abrir o arquivo.\n");
    } else {
        printf("Arquivo aberto com sucesso.\n");
        //Leitura do arquivo de entrada
        fgets(buffer, 255, entrada);//P3
        fgets(buffer, 255, entrada);//Comentários
        fscanf(entrada, "%d %d", &largura, &altura);//Largura Altura
        fscanf(entrada, "%d", &v_max);//Valor maximo
        int matriz[altura][largura][3];
        for(i=0;i<altura;i++){
            for(j=0;j<largura;j++){
                for(k=0;k<3;k++){
                    fscanf(entrada, "%d", &matriz[i][j][k]);
                }
            }
        }

        //Escrita do arquivo de saída
        fprintf(saida, "P3\n");
        fprintf(saida, "# Criado por André\n");
        fprintf(saida, "%d %d\n", largura, altura);
        fprintf(saida, "%d\n", v_max);

        for(i=(altura-1);i>=0;i--){
            for(j=0;j<largura;j++){
                for(k=0;k<3;k++){
                    fprintf(saida, "%d ", matriz[j][i][k]);
                }
            }
        }
        fclose(entrada);
        fclose(saida);
    }
    return 0;
}
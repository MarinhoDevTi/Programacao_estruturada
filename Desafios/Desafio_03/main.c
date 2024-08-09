#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, recursosColetados = 0;
    
    printf("Digite o tamanho do terreno (N x N): ");
    scanf("%d", &N);
    
    // Inicializar o gerador de números aleatórios
    srand(time(NULL));
    
    printf("Explorando o terreno:\n");
    
    // Exploração do terreno
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int valor = rand() % 10; // Gera um número entre 0 e 9
            
            if (valor == 0) {
                printf(". "); // Célula vazia
            } else {
                printf("%d ", valor); // Célula com recurso
                recursosColetados += valor;
            }
        }
        printf("\n"); // Nova linha para cada linha da grade
    }
    
    // Exibir o total de recursos coletados
    if (recursosColetados > 0) {
        printf("%d recursos coletados.\n", recursosColetados);
    } else {
        printf("Nenhum recurso encontrado.\n");
    }

    return 0;
}

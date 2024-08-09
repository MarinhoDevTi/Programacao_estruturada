#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINHA 100
#define ALFABETO 26

void ler_arquivo(FILE *arquivo) {
    char linha[MAX_LINHA];
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        printf("%s", linha);
    }
}

int contar_linhas(FILE *arquivo) {
    int contador = 0;
    char linha[MAX_LINHA];
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        contador++;
    }
    return contador;
}

void imprimir_por_letra(FILE *arquivo, char letra) {
    char linha[MAX_LINHA];
    letra = tolower(letra); // Normaliza a letra para minúscula
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        if (tolower(linha[0]) == letra) {
            printf("%s", linha);
        }
    }
}

void contar_pokemons_por_letra(FILE *arquivo) {
    int contador[ALFABETO] = {0};  // Array para contar pokémons por cada letra do alfabeto
    char linha[MAX_LINHA];
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        if (isalpha(linha[0])) {
            contador[tolower(linha[0]) - 'a']++;
        }
    }
    for (int i = 0; i < ALFABETO; i++) {
        printf("%c: %d\n", 'A' + i, contador[i]);
    }
}

int main() {
    FILE *arquivo;
    char letra;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Ler e imprimir o conteúdo do arquivo\n");
        printf("2. Contar quantas linhas tem o arquivo\n");
        printf("3. Exibir pokémons que começam com uma letra\n");
        printf("4. Exibir a quantidade de pokémons por letra\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        arquivo = fopen("pokemon.txt", "r");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo pokemon.txt\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                ler_arquivo(arquivo);
                break;
            case 2:
                printf("O arquivo tem %d linhas.\n", contar_linhas(arquivo));
                break;
            case 3:
                printf("Digite uma letra: ");
                scanf(" %c", &letra); // O espaço antes de %c é para ignorar o newline
                imprimir_por_letra(arquivo, letra);
                break;
            case 4:
                contar_pokemons_por_letra(arquivo);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        fclose(arquivo);
    } while (opcao != 5);

    return 0;
}

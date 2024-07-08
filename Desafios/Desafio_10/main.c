#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Função para gerar uma senha aleatória
void gerarSenha(char *senha, int tamanho, int maiusculas, int minusculas, int especiais, int numeros) {
    const char letrasMaiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char letrasMinusculas[] = "abcdefghijklmnopqrstuvwxyz";
    const char caracteresEspeciais[] = "%$#@&";
    const char digitos[] = "0123456789";
    char conjuntoCaracteres[100] = "";
    
    if (maiusculas) strcat(conjuntoCaracteres, letrasMaiusculas);
    if (minusculas) strcat(conjuntoCaracteres, letrasMinusculas);
    if (especiais) strcat(conjuntoCaracteres, caracteresEspeciais);
    if (numeros) strcat(conjuntoCaracteres, digitos);
    
    int comprimentoConjunto = strlen(conjuntoCaracteres);
    for (int i = 0; i < tamanho; i++) {
        senha[i] = conjuntoCaracteres[rand() % comprimentoConjunto];
    }
    senha[tamanho] = '\0';
}

int main() {
    srand(time(0));
    
    int quantidadeSenhas, minCaracteres, maxCaracteres;
    int maiusculas, minusculas, especiais, numeros;
    
    printf(">>>> Gerador de senhas aleatórias <<<<\n\n");
    
    printf("Informe a quantidade de senhas: ");
    scanf("%d", &quantidadeSenhas);
    
    printf("Informe a quantidade mínima de caracteres das senhas: ");
    scanf("%d", &minCaracteres);
    
    printf("Informe a quantidade máxima de caracteres das senhas: ");
    scanf("%d", &maxCaracteres);
    
    printf("As senhas terão letras maiúsculas? (1 para sim, 0 para não): ");
    scanf("%d", &maiusculas);
    
    printf("As senhas terão letras minúsculas? (1 para sim, 0 para não): ");
    scanf("%d", &minusculas);
    
    printf("As senhas terão caracteres especiais? (1 para sim, 0 para não): ");
    scanf("%d", &especiais);
    
    printf("As senhas terão números? (1 para sim, 0 para não): ");
    scanf("%d", &numeros);
    
    // Verificar se pelo menos um conjunto de caracteres foi selecionado
    if (!maiusculas && !minusculas && !especiais && !numeros) {
        printf("Você deve selecionar pelo menos um tipo de caractere para a senha.\n");
        return 1;
    }
    
    FILE *arquivo = fopen("senhas.txt", "w");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo para gravação.\n");
        return 1;
    }
    
    FILE *arquivo_10caracteres = fopen("senhas_10_caracteres.txt", "w");
    if (!arquivo_10caracteres) {
        printf("Erro ao abrir o segundo arquivo para gravação.\n");
        fclose(arquivo);
        return 1;
    }
    
    for (int i = 0; i < quantidadeSenhas; i++) {
        int tamanhoSenha = minCaracteres + rand() % (maxCaracteres - minCaracteres + 1);
        char senha[tamanhoSenha + 1];
        gerarSenha(senha, tamanhoSenha, maiusculas, minusculas, especiais, numeros);
        fprintf(arquivo, "%s\n", senha);
        
        char senha10[11];
        gerarSenha(senha10, 10, maiusculas, minusculas, especiais, numeros);
        fprintf(arquivo_10caracteres, "%s\n", senha10);
    }
    
    fclose(arquivo);
    fclose(arquivo_10caracteres);
    
    printf("Senhas geradas e gravadas nos arquivos 'senhas.txt' e 'senhas_10_caracteres.txt'\n");
    
    return 0;
}

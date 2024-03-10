#include <stdio.h>

/*02) Faça um código que receba o raio de um círculo, calcule o seu perímetro e sua área e mostre ao usuário.
Exemplo:
Raio: 5. Perímetro: 31.4. Área: 78.5.
*/

//variavel global
float PI = 3.14159 ; //PI

int main () {
    
  float raio;

  // Recebe o raio do círculo do usuário
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);
  printf("\n");

  // Calcula o perímetro
  float perimetro = 2 * PI * raio;

  // Calcula a área
  float area = PI * raio * raio;

  // Mostra os resultados ao usuário
  printf("Raio: %.2f\n", raio);
  printf("\n");
  printf("Perímetro: %.2f\n", perimetro);
  printf("\n");
  printf("Área: %.2f\n", area);
  printf("\n");

  return 0;
    
}
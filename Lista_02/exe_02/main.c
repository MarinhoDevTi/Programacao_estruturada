#include <stdio.h>

/*02) Faça um código que receba o raio de um círculo, calcule o seu perímetro e sua área e mostre ao usuário.
Exemplo:
Raio: 5. Perímetro: 31.4. Área: 78.5.
*/

int main () {
    
  float raio;

  // Recebe o raio do círculo do usuário
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);

  // Calcula o perímetro
  float perimetro = 2 * 3.14159 * raio;

  // Calcula a área
  float area = 3.14159 * raio * raio;

  // Mostra os resultados ao usuário
  printf("Raio: %.2f\n", raio);
  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);

  return 0;
    
}
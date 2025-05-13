// 1. Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos
#include <stdio.h>
int main(){
  int soma, n1, n2, n3;
  printf("Digite um número inteiro: "); 
  scanf("%d", &n1);
  printf("Digite um segundo número inteiro: "); 
  scanf("%d", &n2);
  printf("Digite um terceiro número inteiro: "); 
  scanf("%d", &n3);
  soma = (n1 * n1) + (n2 * n2) + (n3 * n3);
  printf("A soma dos quadrados é: %d\n", soma);
  return 0;
}

// 2. Leia quatro notas, calcule a média aritmética e imprima o resultado.
#include <stdio.h>
int main(){
  float media, n1, n2, n3, n4;
  printf("Digite a primeira nota: "); 
  scanf("%f", &n1);
  printf("Digite a segunda nota: "); 
  scanf("%f", &n2);
  printf("Digite a terceira nota: "); 
  scanf("%f", &n3);
  printf("Digite a quarta nota: "); 
  scanf("%f", &n4);
  media = (n1  +  n2 + n3 + n4)/4;
  printf("A média das notas é: %.2f\n", media);
  return 0;
}

// 3. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido
#include <stdio.h>
int main() {
    float aposta1, aposta2, aposta3;
    float total_apostado, premio;
    float parte1, parte2, parte3;

    printf("Digite o valor apostado pelo amigo 1: ");
    scanf("%f", &aposta1);

    printf("Digite o valor apostado pelo amigo 2: ");
    scanf("%f", &aposta2);

    printf("Digite o valor apostado pelo amigo 3: ");
    scanf("%f", &aposta3);

    printf("Digite o valor total do prêmio: ");
    scanf("%f", &premio);

    // Soma total apostada
    total_apostado = aposta1 + aposta2 + aposta3;

    // Cálculo proporcional
    parte1 = (aposta1 / total_apostado) * premio;
    parte2 = (aposta2 / total_apostado) * premio;
    parte3 = (aposta3 / total_apostado) * premio;

    printf("\nDistribuição do prêmio:\n");
    printf("Amigo 1 receberá: R$ %.2f\n", parte1);
    printf("Amigo 2 receberá: R$ %.2f\n", parte2);
    printf("Amigo 3 receberá: R$ %.2f\n", parte3);

    return 0;
}
// 1. Faça um programa que leia um número inteiro e o imprima.
#include <stdio.h>
int main(){
  int numero;
  printf("Digite um número inteiro: "); 
  scanf("%d", &numero);
  printf("O número digitado é: %d", numero);
  return 0;
}


// 2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
#include <stdio.h>
int main(){
  int soma, n1, n2, n3;
  printf("Digite um número inteiro: "); 
  scanf("%d", &n1);
  printf("Digite um segundo número inteiro: "); 
  scanf("%d", &n2);
  printf("Digite um terceiro número inteiro: "); 
  scanf("%d", &n3);
  soma = n1 + n2 + n3;
  printf("A soma dos números é: %d", soma);
  return 0;
}

// 3. Leia um número e imprima o resultado do quadrado deste número
#include <stdio.h>
#include <math.h>
int main(){
  int numero;
  double quadrado;
  printf("Digite um número inteiro: "); 
  scanf("%d", &numero);
 
  quadrado = pow(numero, 2);
  printf("O quadrado do número é: %.0f", quadrado);
  return 0;
}
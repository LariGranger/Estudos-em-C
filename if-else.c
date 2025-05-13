#include <stdio.h>
int main(){

  int idade;
  
  printf("Qual sua idade? ");
  scanf("%d", &idade);

  if(idade<18){
    printf("Voce é menor de idade\n");
  }else if(idade>= 18 && idade <60){
    printf("Voce é adulto\n");
  }else{
    printf("Voce é idoso\n");
  }

  return 0;
}
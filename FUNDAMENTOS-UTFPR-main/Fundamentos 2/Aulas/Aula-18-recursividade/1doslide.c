#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que retorne o fatorial de um número passado por
parâmetro. A ideia do fatorial está abaixo:*/

int fatorial(int num){

  if (num == 1) {

    return 1;

  }else{
    return num * fatorial(num-1);
  }
}
int main(){

  int num, fat;
  printf("Insira o numero para calcular o fatorial:\n");
  scanf("%d",&num );
  fat = fatorial(num);
  printf("%d\n", fat);


  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Crie uma função que retorne x elevado a y através de operação de multiplicação. A função recebe x e y por parâmetro

int retorno(int n, int fatorial, int igual) {

  if (n < 0) {
    return 1;
  }else{
    return igual = n * fatorial(n - 1)
  }

}

int main(){
  int n, fat;

  printf("Insira uma valor para calcular o fatorial:\n");
  scanf("%d", &n);
  fat = retorno(igual);
  printf("%d\n",fat);


  return 0;
}

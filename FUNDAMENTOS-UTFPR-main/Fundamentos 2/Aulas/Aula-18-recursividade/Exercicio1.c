#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que retorne x*y através de operação de soma. A função recebe x e y por parâmetro*/

int retorno(int x, int y, int soma) {

  if (y == 1) {
    return 1;
  }else{
    return soma = x + y;
  }

}

int main(){
  int sominha, x, y;

  printf("Insira uma valor para X e Y:\n", x, y);
  scanf("%d %d", &x, &y);
  sominha = x + retorno(soma);
  printf("%d\n",sominha);


  return 0;
}

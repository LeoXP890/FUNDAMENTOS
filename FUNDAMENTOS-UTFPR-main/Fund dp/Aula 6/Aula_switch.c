#include <stdio.h>
#include <stdlib.h>

/*Crie um programa onde:
– O usuário deve fornecer um valor;
– O programa deve responder com o nome do dia da semana correspondente.
– O programa não deve aceitar valores fora da faixa convencional, e deve
apresentar uma mensagem de erro.
1  Domingo
2  Segunda-feira
3  Terça-feira
4  Quarta-feira
5  Quinta-feira
6  Sexta-feira
7  Sábado*/

int main(){

  int opcao;

printf("Escolha um numero de 1 a 7 para representar o dia da semana:\n");
scanf("%i", &opcao);

switch (opcao) {
  case 1:
    printf("DOMINGO");
  break;
  case 2:
    printf("SEGUNDA");
  break;
  case 3:
    printf("TERÇA");
  break;
  case 4:
    printf("QUARTA");
  break;
  case 5:
    printf("QUINTA");
  break;
  case 6:
    printf("SEXTA");
  break;
  case 7:
    printf("SABADO");
  break;

default:
  printf("NUMERO INVALIDO\n");
break;




















}



















  return 0;
}

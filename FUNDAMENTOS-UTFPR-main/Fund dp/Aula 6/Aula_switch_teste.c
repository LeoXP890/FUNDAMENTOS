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

  int dom = 1 seg = 2, ter = 3, qua = 4, qui = 5, sex = 6, sab = 7, opcao;

printf("Escolha um numero de 1 a 7 para representar o dia da semana:\n");
scanf("%i", &opcao);

switch (opcao) {
  case 'dom':
    printf("DOMINGO");
  break;
  case 'seg':
    printf("SEGUNDA");
  break;
  case 'ter':
    printf("TERÇA");
  break;
  case 'qua':
    printf("QUARTA");
  break;
  case 'qui':
    printf("QUINTA");
  break;
  case 'sex':
    printf("SEXTA");
  break;
  case 'sab':
    printf("SABADO");
  break;

default:
  printf("NUMERO INVALIDO\n");
break;




















}



















  return 0;
}

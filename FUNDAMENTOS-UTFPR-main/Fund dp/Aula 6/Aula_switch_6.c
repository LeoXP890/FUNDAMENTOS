#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Crie um programa que inicialmente receba dois números inteiros.
Depois disso, mostre um menu com as seguintes opções:
1. Adição
2. Subtração
3. Multiplicação
4. Divisão
Peça para o usuário informar um valor de 1 a 4. Baseado nesse
valor, calcule e mostre o resultado da opção escolhida pelo
usuário, levando em consideração os dois números inteiros
recebidos.*/

int main(){
  float num1, num2, soma, subtracao, multiplicacao, divisao;
  int calculadora;

  printf("Insira 2 numeros para realizar a conta\n");
  printf("Primeiro numero:\n");
  scanf("%f", &num1 );
  printf("Segundo Numero:\n");
  scanf("%f", &num2 );
  printf("Agora escolha qual operação deseja realizar:\n");
  printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n");
  scanf("%i", &calculadora );





switch (calculadora){
    case 1:
      printf("Voce escolheu soma!\n");
      soma = num1 + num2;
      printf("A soma dos numeros é: %.2f", soma);
      break;

    case 2:
      printf("Voce escolheu subtracao!\n");
      subtracao = num1 - num2;
      printf("A subtração dos numeros é: %.2f\n", subtracao);
      break;

    case 3:
      printf("Voce escolheu multiplicação!\n");
      multiplicacao = num1 * num2;
      printf("O resultado da multiplicação é: %.2f\n", multiplicacao);
      break;

    case 4:
      printf("Voce escolheu divisao:\n");
      divisao = num1 / num2;
      printf("O resultado da divisao é: %.2f\n", divisao);
      break;

    default:
        printf("Função invalida!!\n");
      break;

}


  return 0;
}

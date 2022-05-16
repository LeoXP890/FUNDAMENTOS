/**
 * @file 1.c
 * @author Leonardo Novi (leosan.2003@alunos.utfpr.edu.br)
 * @brief  Exercicio 1 aula 7(Vetores)
 * @version 0.1
 * @date 2022-05-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Números palíndromos são aqueles que escritos da direita para a
esquerda têm o mesmo valor quando escritos da esquerda para a
direita. Exemplo: 545; 789987; 97379; 123454321; etc. Escreva
um programa que verifique se um dado vetor A de 10 elementos
inteiros é um palíndromo, ou seja, se o primeiro elemento do vetor
e igual ao último, se o segundo elemento do vetor é igual ao
penúltimo e assim por diante até verificar todos os elementos ou
chegar a conclusão que o vetor não é um palíndromo.*/

#include <stdio.h>

int main() {
  int vetor[10], salva, ta_certo;

  for (int i = 0; i < 10; i++)
  {
      printf("Forneça um numero: ");
      scanf("%d", &vetor[i]);
  }


 
     if (vetor[0] == vetor[9])
     {
         if (vetor[1] == vetor[8])
        {
            if (vetor[2] == vetor[7])
            {
                if (vetor[3] == vetor[6])
                {
                    if (vetor[4] == vetor[5])
                     {
                         printf("%d%d%d%d%d%d%d%d%d%d || É um palindromo\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], vetor[7], vetor[8], vetor[9]);
                     }
                 
                 }
             
             }

        }





     }else{
         printf("Não é um Palindromo\n");
     }
     
     
     


  return 0;
}
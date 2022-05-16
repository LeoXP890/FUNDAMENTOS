/**
 * @file 2.c
 * @author Leonardo Novi  (leonardo9castrodossantos@gmail.com)
 * @brief Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. 
 * Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado
 * @version 0.1
 * @date 2022-05-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int inteiro(){
    int N;
  printf("Forneça um inteiro positivo: ");
  scanf("%d", &N);  
  if (N <= 0)
  {
    return 0;
  }
  

}

int main(){
  int recebe = inteiro();

  int *vetor = (int*) calloc(recebe, sizeof(int));  

    for (int i = 0; i < recebe; i++)
    {
        vetor[i] = i + 1;
    }
    
    for (int i = 0; i < recebe; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
 free(vetor);   
    

    return 0;
}
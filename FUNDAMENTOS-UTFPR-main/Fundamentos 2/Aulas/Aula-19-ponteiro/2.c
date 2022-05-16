/**
 * @file 1doslide.c 
 * @author Leonardo Novi (leosan.2003@alunos.utfpr.edu.br)
 * @brief Exercicio 1 Aula 19 sobre Ponteiros
 * @version 0.1
 * @date 2022-05-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    float *ptr = vetor;


for (int i = 0; i < 10; i++)
{
    printf("Vetor: %f || Endereço: %p\n",ptr[i], ptr + i);
}






    return 0;
}
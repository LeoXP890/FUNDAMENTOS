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



#include <stdio.h>
#include <stdlib.h>


//Leia 5 números e imprima em ordem inversa de leitura.

int main(){

    int vetor[5];

for (int i = 0; i <= 4; i++)
{
    printf("Forneça 5 numeros: ");
    scanf("%d", &vetor[i]);
}



for (int i = 4; i >= 0 ; i--)
{
    printf("%d", vetor[i]);
}



printf("\n");



    return 0;
}
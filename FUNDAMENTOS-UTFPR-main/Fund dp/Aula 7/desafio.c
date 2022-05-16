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


/*Dado dois vetores, A (4 elementos) e B (5 elementos), faça um
programa em C que imprima todos os elementos comuns aos dois
vetores*/




int main(){
    int vetor[10], ordem_crescente;

for (int i = 0; i <= 9; i++)
{
    printf("Forneça os valores do vetor: ");
    scanf("%d", &vetor[i]);
    
}

   printf("Valores: "); 
for (int i = 0; i <= 9; i++)
{
   printf("%d", vetor[i]);
}
   printf("Ordem Crescente: ");
for (int a = 0; a <= 9; a++)
{
    if (vetor[a] > vetor[a + 1])
    {
        
    }
    
}




    printf("\n");
    return 0;
}
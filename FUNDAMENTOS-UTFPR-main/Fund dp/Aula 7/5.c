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
    int A[4], B[5];

for (int i = 0; i <= 4; i++)
{
    printf("Forneça os valores de A: ");
    scanf("%d", &A[i]);
    
}

for (int i = 0; i <= 5; i++)
    {
        printf("Forneça os valores de B: ");
        scanf("%d", &B[i]);
    }

for (int i = 0; i <= 5; i++)
{
    if (A[i] == B[0])
    {
        printf("%d = %d\n", A[i], B[0]);
    }else if (A[i] == B[1])
    {
        printf("%d = %d\n", A[i], B[1]);
    }else if (A[i] == B[2])
    {
        printf("%d = %d\n", A[i], B[2]);
    }else if (A[i] == B[3])
    {
        printf("%d = %d\n", A[i], B[3]);
    }else if (A[i] == B[4])
    {
        printf("%d = %d\n", A[i], B[4]);
    }
    
    
}


    return 0;
}
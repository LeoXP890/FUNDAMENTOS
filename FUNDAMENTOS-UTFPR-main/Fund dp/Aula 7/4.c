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


/*Ler um vetor A com 10 elementos inteiros correspondentes as
idades de um grupo de pessoas. Escreva um programa que
determine e escreva a quantidade de pessoas que possuem idade
superior a 35 anos*/


int main(){

    int A[10], contador = 0;
for (int i = 0; i <= 9; i++)
{
    printf("Forneça as idades: ");
    scanf("%d", &A[i]);

}

    for (int i = 0; i <= 9; i++)
    {
        if (A[i] >= 35)
        {
            contador++;
        }
        
    }

printf("Numero de pessoas com idade superior a 35: %d\n", contador);






    return 0;
}


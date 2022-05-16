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
#define MAX 10

/*Leia um vetor de 10 posições e imprima o maior valor, menor valor
e a média dos valores contidos no vetor*/

int main(){
    int vetor[10], salva_maior, salva_menor;
    float media;
   
    
    for (int i = 0; i <= MAX; i++)
    {
        printf("Forneça 10 valores: ");
        scanf("%d", &vetor[i]);
        

    
    if (vetor[i] > salva_maior)
    {
        salva_maior = vetor[i];
    }
    salva_menor = vetor[0];
    if (vetor[i] < salva_menor)
    {
        salva_menor = vetor[i];
    }
    


    
    
    
   
        
    }   
     
       
        
    
    
media = vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5] + vetor[6] + vetor[7] + vetor[8] + vetor[9] / 10;


printf("Media: %.2f\n", media);
printf("Maior Valor: %d\n", salva_maior);
printf("Menor Valor: %d\n", salva_menor);

    return 0;
}
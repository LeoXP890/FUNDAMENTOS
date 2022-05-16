/**
 * @file 1.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com)
 * @brief Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. 
 * Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.
 * @version 0.1
 * @date 2022-05-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int tamanho;
    printf("Insira o tamanho do Vetor: ");
    scanf("%d", &tamanho);


    int *vetor = (int*) calloc(tamanho, sizeof(int));
    

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i + 1;
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
 free(vetor);   
    
    



    return 0;
}
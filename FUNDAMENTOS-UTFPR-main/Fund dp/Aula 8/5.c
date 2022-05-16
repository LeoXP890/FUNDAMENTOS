/**
 * @file 5.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com)
 * @brief Na teoria de Sistemas define-se elemento minimax de uma matriz,
o menor elemento da linha em que se encontra o maior elemento
da matriz. Escrever um algoritmo que lê uma matriz 5 por 5 (5x5) e
determine o elemento minimax desta matriz, escrevendo-o e a
posição na matriz em que ele se encontra.
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 3


int main(){
    int minimax, matriz[MAX][MAX], maior, linha;



    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("Forneça a Matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    

    maior = matriz[0][0];
    linha = 0;

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (matriz[i][j] < maior);
            {
                maior = matriz[i][j];
                linha = i;
            }
            
        }    
           minimax = matriz[linha][0];
    for (int j = 0; j < MAX; j++)
    {
        if (matriz[linha] < minimax)
        {
            minimax = matriz[linha][j];
        }
        
    }
    }        
 
    
    printf("Minimax: %d\n", minimax);
    return 0;
}
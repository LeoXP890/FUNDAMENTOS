/**
 * @file 4.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com)
 * @brief Construa um programa que leia uma matriz de tamanho 5 x 5 e
escreva a localização (linha, coluna) do maior valor encontrado na
matriz.
 * @version 0.1
 * @date 2022-05-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#define count 3

int main(){
    int M[3][3];
    int maior = M[0][0];
    int posiçãoi, posiçãoj;

for (int i = 0; i < count; i++)
{
    for (int j = 0; j < count; j++)
    {
        printf("Forneça a Matriz: ");
        scanf("%d", &M[i][j]);
    }
    
}


    
for (int i = 0; i < count; i++)
{
    for (int j = 0; j < count; j++){

        if (M[i][j] > maior)
        {
            maior = M[i][j];
            posiçãoi = i, posiçãoj = j;
        }
        
    }
}
    
printf("Maior Numero da Matriz: %d || Posição: Matriz[%d][%d]\n", maior, posiçãoi, posiçãoj);








    return 0;
}
/**
 * @file 6.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com)
 * @brief Construa um programa que leia uma matriz 2 x 7. O programa
deverá fazer uma busca de um valor N na matriz e, como
resultado, escrever a localização (linha, coluna) do elemento. Caso
o valor de N não constar na matriz lida, o programa deverá mostrar
uma mensagem de “elemento não encontrado”
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main(){
    int M[2][7], n, linha, coluna, achou = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("Fornça a Matriz[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            coluna = j;
        }
        linha = i;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%5d ", M[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Forneça um numero para ser buscado na matriz: ");
    scanf("%d", &n);


for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 7; j++)
    {
        if (M[i][j] == n)
        {
           achou = 1;
        }

    }
    
}

if (achou == 1)
{
    printf("Numero: %d\n", n);
    printf("Está na matriz!!\n");
    
}else
{
    printf("elemento não encontrado\n");
}   





    return 0;
}
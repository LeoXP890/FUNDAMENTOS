/**
 * @file 3.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com )
 * @brief Leia uma matriz quadrada de inteiros com dimensão de 3x3 e
verifique se ela é simétrica em relação à diagonal principal.
Exemplos para teste
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
    int conta;
    int matriz[3][3];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Forneça a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
        }
        
    }
 
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d", matriz[i][j]);
            
        }
        printf("\n");
    }
    
    


    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (matriz[i][j] != matriz[i][j])
            {
                conta++;
            }
            
        }
        
    }
    
    if (conta == 0)
    {
        printf("Deu Certo: ");
    }else
    printf("Não deu Certo: ");
    





    return 0;
}
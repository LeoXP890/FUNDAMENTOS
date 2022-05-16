/**
 * @file 4.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com)
 * @brief Escreva uma função que receba como parâmetro um valor L e um valor C e retorne o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas. 
 * Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
 * @version 0.1
 * @date 2022-05-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <stdlib.h>

void aloca(int** matriz){
    int L, C;
    **matriz = (int **) malloc(L * sizeof(int*));

    for (int i = 0; i < L; i++)
    {
        
    }
    





}





int main(){
    int* L;
    int* C;
    int matriz;
printf("Forneça L e C para formar o tamanho da matriz: ");
scanf("%d %d", &L, &C);
aloca(&matriz);



return 0;
}
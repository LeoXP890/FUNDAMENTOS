/**
 * @file 1.c
 * @author Leonardo Novi (leonardo9castrodossantos@gmail.com)
 * @brief Crie uma matriz identidade com dimensões 5 x 5;
 * @version 0.1
 * @date 2022-05-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>



int main(){
    int matriz[5][5] = {{1, 0, 0, 0, 0}, {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 1, 0}, {0, 0, 0, 0, 1}};
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}





    return 0;
}


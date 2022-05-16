/**
 * @file 1doslide.c 
 * @author Leonardo Novi (leosan.2003@alunos.utfpr.edu.br)
 * @brief Exercicio 1 Aula 19 sobre Ponteiros
 * @version 0.1
 * @date 2022-05-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr1, *ptr2;
    
    if (ptr1 > ptr2)
    {
        printf("Maior conteudo é do ponteiro 1: %p\n", ptr1);
    }else{
        printf("O maior é o ponteiro 2: %p\n", ptr2);
    }
    


    return 0;
}
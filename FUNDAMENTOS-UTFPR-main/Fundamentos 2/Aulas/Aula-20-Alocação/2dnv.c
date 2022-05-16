#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. 
 * Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado*/



int retorno(*inteiro){
    printf("Forneça um numero Inteiro: ");
    scanf("%d", &inteiro);

    if (inteiro <=0)
    {
        return NULL;
    }
    
}



int main(){
    int inteiro;   
    int recebe = retorno(&inteiro);
    int *vetor = (int*) calloc(recebe, sizeof(int));  


    for (int i = 0; i < recebe; i++)
    {
        vetor[i] = i + 1;
    }
    
    for (int i = 0; i < recebe; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
 free(vetor);   
    
    



    return 0;
}
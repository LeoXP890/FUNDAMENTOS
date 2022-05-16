#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. 
 * Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado*/
int* aloca(int N){  
    int* vetor;
    if (N <=0)
    {
        return NULL;
    }else
    {
        return vetor = (int*) malloc(N*sizeof(int));
    }

    
}


int main(){
    int numero;
    int N;
    int vetor[N];
    printf("Forneça um numero inteiro: ");
    scanf("%d", &numero);
    aloca(&vetor);

    for (int i = 0; i < N; i++)
    {
        printf("Vetor: ");
        scanf("%d", &vetor[i]);
    }
    






    return 0;
}
#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles.*/

struct Ponto{
    float x;
    float y;
    
};


int main(){

    struct Ponto pontoum, pontodois;
    printf("Digite o X do Ponto 1");
    scanf("%f", &pontoum.x);
    printf("Digite o Y do Ponto 1");
    scanf("%f", &pontoum.y);
    printf("Digite o X do Ponto 2"); 
    scanf("%f", &pontodois.x);
    printf("Digite o Y do Ponto 2");
    scanf("%f", pontodois.y);









    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles.*/

//D² = (Xb - Xa)² + (Yb - Ya)²

struct Ponto{
    float x;
    float y;
    
};


int main(){

    struct Ponto pontoum, pontodois;
    printf("Digite o X do Ponto 1\n");
    scanf("%f", &pontoum.x);
    printf("Digite o Y do Ponto 1\n");
    scanf("%f", &pontoum.y);
    printf("Digite o X do Ponto 2\n"); 
    scanf("%f", &pontodois.x);
    printf("Digite o Y do Ponto 2\n");
    scanf("%f", &pontodois.y);

    float distancia = sqrt( pow(pontodois.x - pontoum.x, 2) + pow(pontodois.y - pontoum.y, 2);

    printf("A distancia entre os pontos é: %.2f", distancia);










    return 0;
}



#include <stdio.h>


int main(){

    double precoGasolina, quantidadeLitros, total;

    printf("Forneca o valor da gasolina e da quantidade que deseja colocar:\n");
    scanf("%lf%lf", &precoGasolina,&quantidadeLitros);
    total = precoGasolina * quantidadeLitros;
    printf("voce tera que pagar: %lf reais", total);






    return 0;
}
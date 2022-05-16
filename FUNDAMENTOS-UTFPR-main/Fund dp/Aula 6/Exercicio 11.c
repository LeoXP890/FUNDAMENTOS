
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){

  int denominador = 1, numerador;
  float s = 0;


for ( numerador = 1; numerador <= 99; numerador += 2) {

  s = s + (float)numerador / denominador;
  denominador++;

}

printf("%f", s );


    return 0;
}

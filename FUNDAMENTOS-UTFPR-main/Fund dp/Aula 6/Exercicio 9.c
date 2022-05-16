#include <stdio.h>
#include <stdlib.h>



//n . (n – 1). (n – 2)



int main(){

long long int n, fat;



printf("Forneça um numero para calcular o fatorial:");
scanf("%lli", &n);

for (fat = 1; n > 1 ; n = n - 1) {//reduz o n(numero) - 1
fat = fat * n;//calculo fatorial

}

printf("fatorial = %lld\n",fat );// imprime o resultado fatorial


return 0;
}

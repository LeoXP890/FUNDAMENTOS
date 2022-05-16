#include <stdio.h>
#include <stdlib.h>

/*Você recebeu uma oferta para criar um sistema que vai auxiliar o censo da sua cidade. Já que você aprendeu laços de repetição na faculdade e o dinheiro é bom, você decidiu se aventurar. 
Seu programa deve receber a idade de uma quantidade limitada de pessoas. A entrada de dados só deve ser finalizada quando uma idade negativa for informada. 

a) [2,5] Ao final da execução, você deverá mostrar a quantidade de pessoas que estão nas seguintes faixas etárias:

[0 - 12]: Criança;
[13 - 17]: Adolescente;
[18 - 25]: Jovem;
[26 - 59]: Adulto;
Maior ou igual a 60: Idoso
b) [1,0] Também ao final do programa, mostre a média das idades lidas. Lembre-se que o valor negativo fornecido para encerrar a entrada de dados não deve ser considerado no cálculo da média.

Obs.: Solução com o uso de vetores serão desconsideradas.*/



int main(){
    int idade, criança = 0, adolescente = 0, jovem = 0, adulto = 0, idoso = 0, salvar = 0;
    int pessoa = 0;
    float media;
//A
for (int i = 1; i > 0 ; i++)
{
    pessoa++;
    printf("Forneça a idade da pessoa %i: ", pessoa);
    scanf("%i", &idade);
//B
if (idade > 0)
{
     salvar = idade;
    media = ((float)salvar + salvar) / i;
}

   
//A
    if (idade <= 12 && idade > 0)
    {
        criança++;
        printf("Criança\n");
    }else if (idade >= 13 && idade <= 17)
    {
        adolescente++;
        printf("Adolescente\n");
    }else if (idade >=18 && idade <= 25)
    {
        jovem++;
        printf("Jovem\n");      
    }else if (idade >= 26 && idade <= 59)
    {
        adulto++;
        printf("Adulto\n");
    }else if (idade >= 60)
    {
        idoso++;
        printf("Idoso\n");
    }else if (idade < 0)
    {
        break;
    }
    


}//for

printf("Quantidade de Crianças: %i\n", criança);
printf("Quantidade de Adolescentes: %i\n", adolescente);
printf("Quantidade de Jovens: %i\n", jovem);
printf("Quantidade de Adultos: %i\n", adulto);
printf("Quantidade de Idosos: %i\n", idoso);
printf("-----------------------------\n");
//B
printf("Media das idades: %f\n", media);






    return 0;
}
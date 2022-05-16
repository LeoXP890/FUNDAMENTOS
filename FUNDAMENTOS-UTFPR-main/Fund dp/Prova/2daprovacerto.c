/*Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção desejada, receba os dados necessários para executar a operação e mostre o resultado. 
Verificar a possibilidade de opção inválida e não se preocupar com as restrições, como salário inválido.

Menu de opções:

Novo salário
Férias
Décimo terceiro
Sair
[1,0] Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:

Salário	Percentagem de aumento
Até 600,00	15%
de 600,01 a 999,99	10%
Acima de 999,99	5%
[1,0] Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as férias equivalem ao seu salário acrescido de 1/3.
[1,0] Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo 12, calcular e mostrar o valor do décimo terceiro. 
Sabe-se que o décimo terceiro equivale ao seu salário multiplicado pelo número de meses de trabalho dividido por 12.

[0,5] Na opção 4: sair do programa*/


#include <stdio.h>
#include <stdlib.h>



int main(){
    float programa, salario, novo_salario, salario_ferias, meses;
    float decimo_terceiro;
    int escolha;
printf("Escolha a opção que desejar\n");
printf("1 - Novo Salario\n");
printf("2 - Férias\n");
printf("3 - Décimo Terceiro\n");
printf("4 - sair\n");
printf("-------------------------------------------\n");
scanf("%i", &escolha);


switch (escolha)
{
case 1:
    printf("Para saber o novo salario insira o antigo:\n");
    scanf("%f", &salario);
    if (salario <= 600)
    {
        novo_salario = (salario * 0.15) + salario;
    }else if (salario > 600 && salario <= 999)
    {
        novo_salario = (salario * 0.10) + salario;
    }else if (salario > 999)
    {
        novo_salario = (salario * 0.05) + salario;
    }
    printf("Salario com o Ajuste: R$%f\n", novo_salario);
    break;

case 2:
    printf("Insira o seu salario\n");
    scanf("%f", &salario);
    salario_ferias = (salario * 0.33) + salario;
    printf("Suas ferias valem: R$%f\n", salario_ferias);
    break;    

case 3:    
    printf("Para saber seu 13°, Forneça os meses em que você trabalhou e seu salario: \n");
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Meses: ");
    scanf("%f", &meses);
    decimo_terceiro = salario * meses) / 12;
    printf("Seu 13° é de : R$%.2f", decimo_terceiro);
    break;

case 4:
    return 0;
    break;


    default:
        if (escolha >= 4 && escolha < 0)
        {
            printf("Tente de Novo");
        }
        
}




    return 0;
}
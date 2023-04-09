/******************************************************************************

Guilherme Ferreira Almeida de Souza - AED2 - 2AN - Ex 7


*******************************************************************************/
#include <stdio.h>
#include <math.h>

double cubo(double num)
{
    return pow(num, 3);
}

void main()
{
    double num;
    printf("Digite o valor que deseja retornar ao cubo: ");
    scanf("%lf", &num);
    printf("O cubo do numero %.2lf é %.2lf",num, cubo(num));
}



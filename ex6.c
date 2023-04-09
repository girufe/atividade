/******************************************************************************

Guilherme Ferreira Almeida de Souza - AED2 - 2AN - Ex 6

*******************************************************************************/
#include <stdio.h>

int num;

void drawStars()
{
    int i;
    for (i=0; i<num; i++)
    {
        printf("* ");
    }

}

void main()
{
    printf("Digite o numero de estrelas: ");
    scanf("%d", &num);
    drawStars(num);
}



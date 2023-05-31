/******************************************************************************

Guilherme Ferreira Almeida de Souza


Considere o seguinte algoritmo. Realize o teste de mesa para os valores dados e preencha o quadro::

in�cio
    ler x
    ler y 
    z = (x*y) + 5
    se z <= 0 ent�o
        resposta = 'A'
    sen�o
        se z <= 100 ent�o
            resposta =  'B'
        sen�o
            resposta = 'C'
        fim_se
    fim_se
    escrever z, resposta
fim

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, z;
    char resposta, A, B, C;
    
    scanf("%d%d", &x, &y);
    z = (x*y) + 5;
    
    if(z <= 0)
        printf("Z, A");
    else
        if (z <= 100)
            printf("Z, B");
        else printf("Z, C");
}



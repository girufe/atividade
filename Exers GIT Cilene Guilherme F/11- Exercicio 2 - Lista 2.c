/******************************************************************************
Guilherme Ferreira Almeida de Souza



EXERC�CIO 2

Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois
valores X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu
programa dever� escrever a soma dos valores encontrados nas respectivas posi��es
X e Y.

*******************************************************************************/

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor da primeira posi��o: \n");
    scanf("%d", &x);
    while(x < 0 || x >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &x);
    }
    printf("Digite o valor da segunda posi��o: \n");
    scanf("%d", &y);
    while(y < 0 || y >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &y);
    }
    
    soma = v[x] + v[y];
    printf("A soma dos dois valores �: %d", soma);
}





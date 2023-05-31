/******************************************************************************

Guilherme Ferreira Almeida de Souza 



lISTA 2 - EXERC�CIO 4
          A) imprima o maior elemento 
          B) imprima a posi��o do maior elemento

******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], Maior, Posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    for (int i=0; i<TAM; i++) {     
        
        if (v[i]>Maior){
            Maior = v[i];
            Posicao = i;
        }

    }
    printf("\nO maior elemento � %d e est� na posi��o %d", Maior, Posicao);

    return 0;
}


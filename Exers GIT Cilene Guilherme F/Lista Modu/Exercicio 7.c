/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 7

Escreva uma func�o que retorne o cubo do valor passado como argumento. 
******************************************************************************/

#include <stdio.h>

int cubo(int numero) {
    return (numero * numero * numero);
}

int main() {
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    
    int resultado = cubo(numero);
    printf("O cubo de %d � %d\n", numero, resultado);
    
    return 0;
}

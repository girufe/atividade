/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 1

Escreva um programa que implemente uma func�o que retorne a diferenca entre 
dois n�meros inteiros digitados pelo usu�rio.  
******************************************************************************/
#include <stdio.h>

int main() {
    int  valor1, valor2, resultado;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d", &valor2);
    
    resultado = valor1 - valor2;
    
    printf("A diferen�a entre %d e %d � %d", valor1, valor2, resultado);
    
    return 0;
}


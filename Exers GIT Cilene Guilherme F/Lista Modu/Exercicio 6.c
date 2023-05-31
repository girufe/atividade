/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 6

Escreva um programa que implemente uma func�o que passe dado n�mero inteiro 
como parametro, e este desenhe um n�mero equivalente a �*� na tela.   
******************************************************************************/
#include <stdio.h>

void Asteriscos(int numero) {
    int contador = 0;
    while (contador < numero) {
        printf("*");
        contador++;
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    Asteriscos(numero);
    return 0;
}



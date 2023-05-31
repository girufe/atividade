/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 3

Escreva um programa que calcule a �rea de um c�rculo a partir de uma func�o 
especialmente desenhada para isso; essa func�o recebe o valor do raio e retorna a �rea do c�rculo.    
******************************************************************************/

#include <stdio.h>

float Area(float raio) {
    return 3.14159 * raio * raio;
}

int main() {
    float raio, area;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = Area(raio);
    
    printf("A area do circulo de raio %.2f � %.2f", raio, area);
    
    return 0;
}


/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 2

 Escreva uma func�o que retorne a divis�o entre dois n�meros inteiros. 
 Atencao para a quest�o da divis�o por zero! A divis�o n�o pode ocorrer se o divisor for zero.   
******************************************************************************/

float divisao(int valor1, int valor2) {
	
    if (valor2 == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    } else {
        return (float) valor1 / valor2;
    }
}

int main() {
    int valor1, valor2;
    float resultado;
    
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%d", &valor2);
    
    resultado = divisao(valor1, valor2);
    
    printf("A divisao entre %d e %d � %f", valor1, valor2, resultado);
    
    return 0;
}


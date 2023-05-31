/*******************************************************************************

Guilherme Ferreira Almeida de Souza


Ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comiss�o de 3% sobre o total das vendas at� R $1.500,00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu sal�rio total.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salariofx, valorvenda, comissao, salariofn;
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salariofx);
    
    printf("Digite o valor das vendas efetuadas pelo funcionario: \n");
    scanf("%f", &valorvenda);
    
    if(valorvenda <= 1500)
        comissao = 0.03;
    else comissao = 0.05;
    
    salariofn = salariofx + comissao * salariofx;
    
    printf("O salario final do vendedor e de: R$%.2f", salariofn);
    
    return 0;
}



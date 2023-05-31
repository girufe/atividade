/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 4

Crie um sistema de caixa eletrpnico, utilizando menus (switch) e outros 
recursos, que realizem operac�es financeiras a partir de func�es especificamente 
projetadas para tal. Lembre-se de que o caixa eletronico � um programa que roda 
como repetic�o cont�nua, at� que o usu�rio decida encerrar as operac�es. 
Opera��es: Dep�sito, Saque e Saldo.  
******************************************************************************/
#include <stdio.h>

float saldo = 0.0;

void deposito() {
    float valor;
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &valor);
    saldo += valor;
    printf("\nDeposito realizado com sucesso!\n");
}

void saque() {
    float valor;
    if (saldo <= 0.0) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if (valor > saldo) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    saldo -= valor;
    printf("\nSaque realizado com sucesso!\n");
}

void consultaSaldo() {
    printf("\nSeu saldo atual �: R$%.2f\n", saldo);
}

int main() {
    int opcao = 0;
    while (opcao != 4) {
    	
        printf("\nSelecione uma opcao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Consulta de saldo\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                consultaSaldo();
                break;
            case 4:
                printf("\nEncerrando programa...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
                break;
        }
    }
    return 0;
}


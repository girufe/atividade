/******************************************************************************

Guilherme Ferreira Almeida de Souza



Saida: 6 printf com alter��es antes e depois da chamada das fun��es
Entrada: Nenhuma
Processo: Criar uma fun��o que retorne um valor inteiro, para
que ocorra uma altera��o na vari�vel no corpo main

Altera��es:
mudan�a da tipagem da fun��o para ser capaz de retornar um int
adicionar ao fim da fun��o um return com o valor desejado
*******************************************************************************/

#include <stdio.h>

int muda(int);
int muda2();


int main(){
	int n=5;
	printf ("\nn = %d antes da chamada de muda", n);
	n = muda (n);
	printf ("\nn = %d depois da chamada de muda", n);
	printf("\n\n\n");
	n=5;
	printf ("\nn = %d antes da chamada de muda2", n);
	muda2();
	printf ("\nn = %d depois da chamada de muda2", n);
	return 0;
}

int muda(int n){
	n = 10;
	printf("\nn = %d dentro da funcao muda", n);
	return n;
}

int muda2(){
	int n = 10;
	printf("\nn = %d dentro da funcao muda2", n);
}




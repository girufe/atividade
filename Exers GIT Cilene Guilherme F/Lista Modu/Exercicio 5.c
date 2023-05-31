/******************************************************************************

Guilherme Ferreira Almeida de Souza



Lista Modulariza��o - EXERC�CIO 5

Crie uma func�o que determine se dado caracter est� entre �a� e �z�. Dica: 
Use a tabela ASCII.  
******************************************************************************/
#include <stdio.h>

int AZ(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    if (AZ(letra)) {
        printf("O caractere '%c' est� entre 'a' e 'z'\n", letra);
    } else {
        printf("O caractere '%c' n�o est� entre 'a' e 'z'\n", letra);
    }
    return 0;
}


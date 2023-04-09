/******************************************************************************

Guilherme Ferreira Almeida de Souza - AED2 - 2AN - Ex 5


*******************************************************************************/
#include <stdio.h>

int entreAeZ(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
    return 0;
}

void main() {
    char carac;
    
    printf("Digite um caractere: ");
    scanf("%c", &carac);

    if (entreAeZ(carac)) {
        printf("O caractere %c está entre 'a' e 'z'\n", carac);
    } else {
        printf("O caractere %c não está entre 'a' e 'z'\n", carac);
    }
}



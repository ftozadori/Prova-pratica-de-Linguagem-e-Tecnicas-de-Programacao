/*2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
por 400.*/

#include <stdio.h>

void verificarano(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.", ano);
    }
    else {
      printf ("O ano %d não é bissexto.", ano);
    }
}

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    verificarano(ano);

    return 0;
}


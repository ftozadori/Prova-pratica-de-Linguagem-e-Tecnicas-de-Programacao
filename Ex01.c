/*1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
  for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
  por essa razão, limite a verificação a um conjunto pequeno de números para
  verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.*/

#include <stdio.h>

int primo(int n) {

    if (n < 1 || n > 10) { 
      return -1;
    }

    else if (n == 2 || n == 3 || n == 5 || n == 7) {
        return 1;
    }

    return 0;
}

int main() {
    int n;

    printf("Informe um número entre 1 e 10: ");
    scanf("%d", &n);

    if (primo(n) == -1) {
      printf("Número inválido");
    }
    else if (primo(n) == 1) {
        printf("%d é um número primo.", n);
    } 
    else {
        printf("%d não é um número primo.", n);
    }

    return 0;
}
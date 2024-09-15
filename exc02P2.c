/*2. Um número perfeito é aquele que é igual à soma de seus divisores próprios
(excluindo ele mesmo). Escreva um programa que solicite ao usuário um número
inteiro positivo e verifique se esse número é perfeito. O programa deve utilizar um
laço para somar os divisores e, no final, informar se o número é perfeito ou não.*/

#include <stdio.h>

int main() {
    int numero, somadivisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O número deve ser um inteiro positivo.\n");
        return 1;
    }

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somadivisores += i;
        }
    }

    if (somadivisores == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}
/*6. Escreva um programa que solicite dois números inteiros positivos ao usuário: um
valor inicial e um valor final. O programa deve então exibir todos os números primos
dentro desse intervalo. Se não houver números primos no intervalo, o programa
deve informar isso.*/

#include <stdio.h>

int Primo(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int inicio, fim;
    int encontrouPrimo = 0;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    if (inicio <= 0 || fim <= 0 || inicio > fim) {
        printf("Intervalo inválido.\n");
        return 1;
    }

    for (int i = inicio; i <= fim; i++) {
        if (Primo(i)) {
            printf("%d ", i);
            encontrouPrimo = 1;
        }
    }

    if (!encontrouPrimo) {
        printf("Não há números primos.\n");
    }

    return 0;
}
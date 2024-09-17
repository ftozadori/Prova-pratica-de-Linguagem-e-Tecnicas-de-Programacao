/*12. Escreva um programa que solicite ao usuário 6 números inteiros. Para cada
número, verifique se ele é par ou ímpar. Se o número for par, verifique se é maior
que 10 ou não. Se for ímpar, verifique se é menor que 50 ou não.*/

#include <stdio.h>

int main() {
    int numero;

    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        if (scanf("%d", &numero) != 1) {
            printf("Entrada inválida. Insira um número inteiro.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }

        if (numero % 2 == 0) {
            if (numero > 10) {
                printf("Número %d é par e maior que 10.\n", numero);
            } else {
                printf("Número %d é par e não é maior que 10.\n", numero);
            }
        } else {
            if (numero < 50) {
                printf("Número %d é ímpar e menor que 50.\n", numero);
            } else {
                printf("Número %d é ímpar e não é menor que 50.\n", numero);
            }
        }
    }

    return 0;
}
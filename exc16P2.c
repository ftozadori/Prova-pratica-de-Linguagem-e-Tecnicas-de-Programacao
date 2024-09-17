/*16. Escreva um programa que apresente um menu com as seguintes opções:
1. Calcular o fatorial de um número.
2. Sair.
O programa deve solicitar ao usuário um número inteiro e calcular o seu fatorial. O
menu deve continuar sendo exibido até que o usuário escolha a opção de sair.*/

#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opcao, numero;

    do {
        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número inteiro não-negativo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("Número inválido. O fatorial não está definido para números negativos.\n");
                } else {
                    printf("Fatorial de %d é %llu.\n", numero, fatorial(numero));
                }
                break;
            case 2:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 2);

    return 0;
}
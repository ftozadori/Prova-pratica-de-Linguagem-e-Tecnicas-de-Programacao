/*15. Escreva um programa que apresente um menu com as seguintes opções:
1. Gerar a tabuada de um número.
2. Sair.
O programa deve solicitar ao usuário o número desejado e exibir a tabuada (de 1 a
10). O menu deve continuar sendo exibido até que o usuário escolha a opção de
sair.*/

#include <stdio.h>

void gerar_tabuada() {
    int numero;
    printf("Digite o número para gerar a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                gerar_tabuada();
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
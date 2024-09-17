/*14. Escreva um programa que apresente um menu com as seguintes opções:
1. Adição.
2. Subtração.
3. Multiplicação.
4. Divisão.
5. Sair.
O programa deve solicitar dois números e realizar a operação escolhida. Deve
continuar exibindo o menu até que o usuário escolha a opção de sair. */

#include <stdio.h>

void adicao() {
    float a, b;
    printf("Digite dois números para adição:\n");
    scanf("%f %f", &a, &b);
    printf("Resultado da adição: %.2f\n", a + b);
}

void subtracao() {
    float a, b;
    printf("Digite dois números para subtração:\n");
    scanf("%f %f", &a, &b);
    printf("Resultado da subtração: %.2f\n", a - b);
}

void multiplicacao() {
    float a, b;
    printf("Digite dois números para multiplicação:\n");
    scanf("%f %f", &a, &b);
    printf("Resultado da multiplicação: %.2f\n", a * b);
}

void divisao() {
    float a, b;
    printf("Digite dois números para divisão:\n");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        printf("Resultado da divisão: %.2f\n", a / b);
    } else {
        printf("Erro: Divisão por zero.\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicao();
                break;
            case 2:
                subtracao();
                break;
            case 3:
                multiplicacao();
                break;
            case 4:
                divisao();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}
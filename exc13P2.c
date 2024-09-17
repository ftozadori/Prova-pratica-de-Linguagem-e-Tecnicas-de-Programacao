/*13. Escreva um programa que apresente um menu com as seguintes opções:
1. Converter de Celsius para Fahrenheit.
2. Converter de Fahrenheit para Celsius.
3. Sair.
O programa deve continuar exibindo o menu até que o usuário escolha a opção de
sair.*/

#include <stdio.h>

void converter_celsius_para_fahrenheit() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius é igual a %.2f Fahrenheit.\n", celsius, fahrenheit);
}

void converter_fahrenheit_para_celsius() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit é igual a %.2f Celsius.\n", fahrenheit, celsius);
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                converter_celsius_para_fahrenheit();
                break;
            case 2:
                converter_fahrenheit_para_celsius();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
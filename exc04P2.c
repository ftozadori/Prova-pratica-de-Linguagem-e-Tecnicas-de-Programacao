/*4. Escreva um programa que solicite ao usuário um número decimal e um valor de
base de conversão (entre 2 e 16). O programa deve converter o número decimal
para a base desejada e exibir o resultado. Utilize um laço para realizar a conversão.*/

#include <stdio.h>

void converterParaBase(int numero, int base) {
    char caracteres[] = "0123456789ABCDEF";
    char resultado[64];
    int i = 0;

    if (numero == 0) {
        printf("0");
        return;
    }

    while (numero > 0) {
        resultado[i] = caracteres[numero % base];
        numero /= base;
        i++;
    }

    printf("Número convertido: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", resultado[j]);
    }
    printf("\n");
}

int main() {
    float numero, base;

    printf("Digite um número decimal: ");
    scanf("%f", &numero);

    printf("Digite a base de conversão (entre 2 e 16): ");
    scanf("%f", &base);

    if (base < 2 || base > 16) {
        printf("Base inválida. A base deve estar entre 2 e 16.\n");
        return 1;
    }

    converterParaBase(numero, base);

    return 0;
}
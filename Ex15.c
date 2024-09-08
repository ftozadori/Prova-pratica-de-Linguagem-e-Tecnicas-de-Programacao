/*15. Crie um programa que converta um valor monetário entre três moedas: real
(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
moeda de destino e o valor a ser convertido. As taxas de conversão são as
seguintes:
● 1 USD = 5.30 BRL
● 1 EUR = 6.20 BRL
● 1 BRL = 0.19 USD
● 1 BRL = 0.16 EUR
O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
reconhecida, o programa deve exibir uma mensagem de erro. */

#include <stdio.h>

int main() {
    int moeda_origem, moeda_destino;
    float valor, resultado;

    float USDpBRL = 5.30f;
    float EURpBRL = 6.20f;
    float BRLpUSD = 0.19f;
    float BRLpEUR = 0.16f;

    printf("Escolha a moeda de origem:\n");
    printf("1 - Real (BRL)\n");
    printf("2 - Dólar (USD)\n");
    printf("3 - Euro (EUR)\n");
    printf("Digite o número correspondente à moeda de origem: ");
    scanf("%d", &moeda_origem);

    printf("Escolha a moeda de destino:\n");
    printf("1 - Real (BRL)\n");
    printf("2 - Dólar (USD)\n");
    printf("3 - Euro (EUR)\n");
    printf("Digite o número correspondente à moeda de destino: ");
    scanf("%d", &moeda_destino);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    if (moeda_origem < 1 || moeda_origem > 3 || moeda_destino < 1 || moeda_destino > 3) {
        printf("A moeda escolhida é inválida.");
    }

    if (moeda_origem == 1) { 
        if (moeda_destino == 2) {
            resultado = valor * BRLpUSD;
        } else if (moeda_destino == 3) {
            resultado = valor * BRLpEUR;
        } else {
            resultado = valor;
        }
    } else if (moeda_origem == 2) {
        if (moeda_destino == 1) {
            resultado = valor * USDpBRL;
        } else if (moeda_destino == 3) {
            resultado = valor * (BRLpEUR / BRLpUSD);
        } else {
            resultado = valor;
        }
    } else if (moeda_origem == 3) {
        if (moeda_destino == 1) {
            resultado = valor * EURpBRL;
        } else if (moeda_destino == 2) {
            resultado = valor * (BRLpUSD / BRLpEUR);
        } else {
            resultado = valor;
        }
    } else {
        printf("Opção de moeda de origem inválida.");
    }

    printf("O valor convertido é: %.2f", resultado);

}
   

   




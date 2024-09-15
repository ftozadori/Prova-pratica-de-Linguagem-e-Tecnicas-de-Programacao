/*1. Escreva um programa em C que solicite ao usuário o valor inicial de um
investimento, a taxa de juros anual (em porcentagem) e o número de anos que o
dinheiro será investido. O programa deve calcular o valor final do investimento ao
final de cada ano, aplicando os juros compostos, e mostrar uma tabela com o valor
acumulado ano a ano.*/

#include <stdio.h>
#include <math.h>

int main() {
    double valorinicial, taxajuros, valoracumulado;
    int anos;

    printf("Digite o valor inicial do investimento: ");
    scanf("%lf", &valorinicial);
    
    printf("Digite a taxa de juros anual (em porcentagem): ");
    scanf("%lf", &taxajuros);
    
    printf("Digite o número de anos do investimento: ");
    scanf("%d", &anos);

    taxajuros /= 100.0;

    printf("\nAno\tValor Acumulado\n");
    printf("-------------------------\n");

    for (int ano = 1; ano <= anos; ano++) {
        valoracumulado = valorinicial * pow(1 + taxajuros, ano);
        printf("%d\t%.2f\n", ano, valoracumulado);
    }

    return 0;
}
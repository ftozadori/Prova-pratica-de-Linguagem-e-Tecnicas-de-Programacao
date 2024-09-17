/*10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
Para cada idade, o programa deve classificar a pessoa em uma das categorias:
criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
anos ou mais).*/

#include <stdio.h>

int main() {
    int idade;
    const int num_pessoas = 10;

    for (int i = 0; i < num_pessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade >= 0 && idade <= 12) {
            printf("Pessoa %d: Criança\n", i + 1);
        } else if (idade >= 13 && idade <= 17) {
            printf("Pessoa %d: Adolescente\n", i + 1);
        } else if (idade >= 18 && idade <= 64) {
            printf("Pessoa %d: Adulto\n", i + 1);
        } else if (idade >= 65) {
            printf("Pessoa %d: Idoso\n", i + 1);
        } else {
            printf("Idade inválida para a pessoa %d.\n", i + 1);
        }

        printf("\n");
    }

    return 0;
}
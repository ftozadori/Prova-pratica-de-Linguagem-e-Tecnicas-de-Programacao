/*7. Crie um programa que peça ao usuário para inserir as notas de 5 alunos. Para
cada aluno, o programa deve calcular a média. Se a média for maior ou igual a 7.0,
o aluno é aprovado; caso contrário, ele é reprovado. Ao final, o programa deve exibir
a média de cada aluno e se ele foi aprovado ou reprovado.*/

#include <stdio.h>

int main() {
    int num_alunos = 5;
    double notas[5][3];
    double media;
    
    for (int i = 0; i < num_alunos; i++) {
        double soma = 0.0;
        printf("Notas do aluno %d:\n", i + 1);
        
        for (int j = 0; j < 3; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%lf", &notas[i][j]);
            soma += notas[i][j];
        }
        
        media = soma / 3.0;
        
        printf("Média do aluno %d: %.2f\n", i + 1, media);
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
        
        printf("\n");
    }
    
    return 0;
}
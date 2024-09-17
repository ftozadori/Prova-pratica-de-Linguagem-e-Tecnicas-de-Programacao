/*9. Escreva um programa que peça ao usuário para inserir as notas de 5 alunos.
Para cada aluno, o programa deve calcular a média de duas provas. Se a média for
maior ou igual a 7.0, o aluno é aprovado. Se a média estiver entre 5.0 e 6.9, o aluno
vai para a recuperação, e se for menor que 5.0, o aluno é reprovado.*/

#include <stdio.h>

int main() {
    int num_alunos = 5;
    double nota1, nota2, media;

    for (int i = 0; i < num_alunos; i++) {
        printf("Notas do aluno %d:\n", i + 1);
        
        printf("Digite a nota da primeira prova: ");
        scanf("%lf", &nota1);
        
        printf("Digite a nota da segunda prova: ");
        scanf("%lf", &nota2);

        media = (nota1 + nota2) / 2.0;
        
        printf("Média do aluno %d: %.2f\n", i + 1, media);
        
        if (media >= 7.0) {
            printf("Aprovado\n");
        } else if (media >= 5.0) {
            printf("Recuperação\n");
        } else {
            printf("Reprovado\n");
        }
        
        printf("\n");
    }

    return 0;
}
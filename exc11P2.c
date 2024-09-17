/*11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3).*/

#include <stdio.h>

char classificar_nota(float nota) {
    if (nota >= 9 && nota <= 10) {
        return 'A';
    } else if (nota >= 7 && nota < 9) {
        return 'B';
    } else if (nota >= 5 && nota < 7) {
        return 'C';
    } else if (nota >= 3 && nota < 5) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    float nota;
    char conceito;
    
    for (int i = 0; i < 8; i++) {
        while (1) {
            printf("Insira a nota do aluno %d (0 a 10): ", i + 1);
            if (scanf("%f", &nota) != 1) {
                printf("Entrada inválida. Insira um número.\n");
                while (getchar() != '\n');
            } else if (nota < 0 || nota > 10) {
                printf("Nota inválida. A nota deve estar entre 0 e 10.\n");
            } else {
                conceito = classificar_nota(nota);
                break;
            }
        }
        printf("Aluno %d: Nota = %.1f, Conceito = %c\n", i + 1, nota, conceito);
    }

    return 0;
}
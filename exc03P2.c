/*3. Escreva um programa em C que solicite ao usuário as notas de 5 alunos e suas
respectivas pesos, calcule a média ponderada de cada aluno e ao final exiba a
média final da turma.*/

#include <stdio.h>

int main() {
    int i;
    double nota, peso;
    double somaponderadaturma = 0.0;
    double somapesosturma = 0.0;
    
    for (i = 1; i <= 5; i++) {
        double somaponderadaaluno = 0.0;
        double somapesosaluno = 0.0;
    
        printf("Aluno %d:\n", i);
        
        for (int j = 1; j <= 5; j++) {
            printf("Digite a nota %d: ", j);
            scanf("%lf", &nota);
            printf("Digite o peso da nota %d: ", j);
            scanf("%lf", &peso);
            
            somaponderadaaluno += nota * peso;
            somapesosaluno += peso;
        }
        
        double mediaponderadaaluno = somaponderadaaluno / somapesosaluno;
        printf("Média ponderada do aluno %d: %.2f\n", i, mediaponderadaaluno);
        
        somaponderadaturma += mediaponderadaaluno * somapesosaluno;
        somapesosturma += somapesosaluno;
    }
    
    double mediafinalturma = somaponderadaturma / somapesosturma;
    printf("Média final da turma: %.2f\n", mediafinalturma);
    
    return 0;
}
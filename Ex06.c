/*6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
reprovação caso contrário. A função deve exibir mensagens para os dois casos.*/

#include <stdio.h>

void nota(float nota){

    if (nota > 10 || nota < 0){
        printf("Nota inválida");
    }
    else if (nota >= 7){
        printf("O aluno foi aprovado");
    }
    else if (nota < 7){
        printf("O aluno foi reprovado");
    }
}

int main(){
  float n;

  printf("Digite a nota do aluno: ");
  scanf("%f", &n);
 
  nota (n);
}



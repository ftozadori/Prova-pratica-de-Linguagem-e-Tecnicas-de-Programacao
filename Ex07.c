/*7. Desenvolva uma função que receba um número inteiro e determine se ele é par
ou ímpar. Exiba uma mensagem correspondente para cada caso.*/

#include <stdio.h>

int par(int num){

    if (num % 2 == 0){
        printf("O número %d é par.", num);
    }
    else {
        printf("O número %d é ímpar.", num);
    }
}



int main(){
  int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    par (n);
}



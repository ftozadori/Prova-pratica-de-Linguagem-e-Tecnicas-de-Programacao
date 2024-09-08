/*5. Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
casos em que a pessoa é maior ou menor de idade.*/

#include <stdio.h>

void idade(int a) {
  
    if (a >= 18){
        printf("A pessoa é maior de idade");
    }
    else{
        printf("A pessoa é menor de idade");
    }
}
int main (){
    int id;

    printf("Informe a idade da pessoa: ");
    scanf("%d", &id);

    idade (id);  
}


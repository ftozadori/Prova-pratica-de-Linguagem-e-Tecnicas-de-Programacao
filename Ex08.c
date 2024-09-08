/*8. Elabore uma função que calcule o imposto sobre um salário com base no valor
recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
pago. */

#include <stdio.h>

float imposto(float salario){

    if (salario > 5000){
       salario = salario * 0.2;
       printf("O imposto a ser pago é de: %.2f", salario);
    }
    else {
       salario = salario * 0.1;
       printf("O imposto a ser pago é de: %.2f", salario);
    }
}

int main(){
  float sal;

    printf("Informe o salário: ");
    scanf("%f", &sal);

    imposto (sal);
}



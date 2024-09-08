/*10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
alíquotas progressivas para calcular o valor da contribuição:
● Até R$ 1.320,00: 7,5%
● De R$ 1.320,01 até R$ 2.571,29: 9%
● De R$ 2.571,30 até R$ 3.856,94: 12%
● De R$ 3.856,95 até R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente.*/

#include <stdio.h>

float imposto(float sal1){

   if (sal1 < 1320.01) {
      sal1 = sal1 * 0.075;
      printf("O valor do imposto é: %.2f", sal1);
   }
   else if (sal1 > 1320.00 && sal1 < 2571,29) {
      sal1 = (sal1 * 0.09);
      printf("Valor do imposto é: %.2f", sal1);
   }    
   else if (sal1 > 2571.29 && sal1 < 3856.94) {
      sal1 = (sal1 * 0.12); 
      printf("Valor do imposto é: %.2f", sal1);
   }
   else if (sal1 > 3856.94 && sal1 < 7507.49){
      sal1 = (sal1 * 0.14);
      printf("Valor do imposto é: %.2f", sal1);
   }
}

int main(){
  float sal;

    printf("Informe o salário: ");
    scanf("%f", &sal);

    imposto (sal);
}



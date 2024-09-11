/*9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
Utilize as alíquotas e deduções conforme a tabela abaixo:
● Até R$ 2.112,00: Isento
● De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
● De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
● De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
● Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
Use a estrutura condicional aninhada para calcular o imposto corretamente.*/

#include <stdio.h>

float imposto(float sal1){

   if (sal1 < 2112.01) {
      printf("Isento");
   }
   else if (sal1 > 2112.00 && sal1 < 2826.66) {
      sal1 = (sal1 * 0.075) - 158.40;
      printf("Valor do imposto: %.2f", sal1);
   }    
   else if (sal1 > 2826.65 && sal1 < 3751.06) {
      sal1 = (sal1 * 0.15) - 370.40;
      printf("Valor do imposto: %.2f", sal1);
   }
   else if (sal1 > 3751.05 && sal1 < 4664.68){
      sal1 = (sal1 * 0.225) - 651.73;
      printf("Valor do imposto: %.2f", sal1);
   }
   else if (sal1 > 4664.68){
      sal1 = (sal1 * 0.275) - 884.96;
      printf("Valor do imposto: %.2f", sal1);
   }  
}

int main(){
  float sal;

    printf("Informe o salário: ");
    scanf("%f", &sal);

    imposto (sal);
}



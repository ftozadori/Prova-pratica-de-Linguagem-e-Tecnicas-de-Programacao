/*11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
de ICMS com base nas faixas de preço do produto:
● Até R$ 1.000,00: Desconto de 5%
● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
● Acima de R$ 5.000,00: Desconto de 15%
Use a estrutura condicional aninhada para aplicar o desconto corretamente.*/

#include <stdio.h>

float produto (float prod1){

   if (prod1 < 1000.01) {
     prod1 = prod1 * 0.05;
     printf("O desconto será de: %.2f", prod1);
   }
   else if (prod1 > 1000.01 && prod1 < 5000.00){
      prod1 = prod1 * 0.10;
      printf("O desconto será de: %.2f", prod1);
   }
   else if (prod1 >= 5000.00){
      prod1 = prod1 * 0.15;
      printf("O desconto será de: %.2f", prod1);
   }
}

int main(){
  float prod;

    printf("Informe o valor do produto: ");
    scanf("%f", &prod);

    produto (prod);
}



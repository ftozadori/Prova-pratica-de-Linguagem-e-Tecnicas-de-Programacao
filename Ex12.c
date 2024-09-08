/*12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
do IPTU com base na tabela abaixo:
● Até R$ 100.000,00: Alíquota de 1%
● De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
● De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
● Acima de R$ 500.000,00: Alíquota de 2,5%
Use a estrutura condicional aninhada para aplicar a alíquota corretamente.*/

#include <stdio.h>

float imovel (float imvl){

   if (imvl <= 100000){
     imvl = imvl * 0.01;
     printf("O IPTU será de: %.2f", imvl);
   }
   else if (imvl > 100000 && imvl <= 300000){
      imvl = imvl * 0.015;
      printf("O IPTU será de: %.2f", imvl);
   }
   else if (imvl > 300000 && imvl <= 500000){
      imvl = imvl * 0.02;
      printf("O IPTU será de: %.2f", imvl);
   }
   else if (imvl > 500000){
      imvl = imvl * 0.025;
      printf("O IPTU será de: %.2f", imvl);
   }
}

int main(){
  float imvl1;

    printf("Informe o valor do imóvel: ");
    scanf("%f", &imvl1);

    imovel (imvl1);
}



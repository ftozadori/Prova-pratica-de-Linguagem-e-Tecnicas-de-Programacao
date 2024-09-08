/*13. Crie um programa que simule uma calculadora simples. O programa deve
permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
multiplicação e divisão. O usuário deve informar a operação desejada e dois
números. O programa deve realizar a operação selecionada e exibir o resultado.
Caso a operação não seja reconhecida, o programa deve informar um erro.*/

#include <stdio.h>

char calculadora(char esc){
   float n1, n2, resultado;

   if (esc != 'a' && esc != 'b' && esc != 'c' && esc != 'd'){
      printf("Operação inválida");
   }
   else {
     printf("Digite o primeiro número: ");
     scanf("%f", &n1);
     printf("Digite o segundo número: ");
     scanf("%f", &n2);
   }
     if ( esc == 'a' ){
        resultado = n1 + n2;
        printf("|=-=-=-=-=-=-=CALCULADORA=-=-=-=-=-=-=|\n");
        printf("|                                     |\n");
        printf("|         %.2f + %.2f = %.0f           \n", n1, n2, resultado);
        printf("|                                     |\n");
        printf("|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
     }
     else if ( esc == 'b'){
        resultado = n1 - n2;
        printf("|=-=-=-=-=-=-=CALCULADORA=-=-=-=-=-=-=|\n");
        printf("|                                     |\n");
        printf("|         %.2f - %.2f = %.0f           \n", n1, n2, resultado);
        printf("|                                     |\n");
        printf("|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
     }
     else if ( esc == 'c'){
        resultado = n1 * n2;
        printf("|=-=-=-=-=-=-=CALCULADORA=-=-=-=-=-=-=|\n");
        printf("|                                     |\n");
        printf("|         %.2f x %.2f = %.0f           \n", n1, n2, resultado);
        printf("|                                     |\n");
        printf("|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
     }
     else if ( esc == 'd'){
        resultado = n1 / n2;
        printf("|=-=-=-=-=-=-=CALCULADORA=-=-=-=-=-=-=|\n");
        printf("|                                     |\n");
        printf("|         %.2f ÷ %.2f = %.0f           \n", n1, n2, resultado);
        printf("|                                     |\n");
        printf("|=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
     }
  }

int main(){
  char a, b, c, d, esc;

   printf("=======CALCULADORA========\n");
   printf("a - Soma\n");
   printf("b - Subtração\n");
   printf("c - Multiplicação\n");
   printf("d - Divisão\n");
   printf("==========================\n");
   
   printf("Escolha a operação desejada: ");
   scanf("%c", &esc);

   calculadora (esc);
}



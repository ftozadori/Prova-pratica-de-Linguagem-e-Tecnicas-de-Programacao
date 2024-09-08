/*3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
retornar 1. Caso contrário, não deve retornar nada.*/

#include <stdio.h>

void triangulo(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Os lados %.2f, %.2f e %.2f formam um triângulo válido.", a, b, c);
    }
    else {
        printf("Os lados %.2f, %.2f e %.2f não formam um triângulo válido.", a, b, c);
    }
}

int main() {
    float l1, l2, l3;

    printf("Informe o primeiro lado do triângulo: ");
    scanf("%f", &l1);
    printf("Informe o segundo lado do triângulo: ");
    scanf("%f", &l2);
    printf("Informe o terceiro lado do triângulo: ");
    scanf("%f", &l3);

    triangulo(l1, l2, l3);

    return 0;
}


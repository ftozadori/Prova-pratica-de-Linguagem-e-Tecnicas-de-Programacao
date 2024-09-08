/*4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
contrário, não deverá fazer nada.*/

#include <stdio.h>

void verificartriangulo(float a, float b, float c) {
    float hip, l1, l2;

    if (a >= b && a >= c) {
        hip = a;
        l1 = b;
        l2 = c;
    } 
    else if (b >= a && b >= c) {
        hip = b;
        l1 = a;
        l2 = c;
    } 
    else {
        hip = c;
        l1 = a;
        l2 = b;
    }

    if (hip * hip == l1 * l1 + l2 * l2) {
        printf("Os lados %.2f, %.2f e %.2f formam um triângulo retângulo.", a, b, c);
    }
}

int main() {
    float l1, l2, l3;

    printf("Informe o primeiro lado do triangulo: ");
    scanf("%f", &l1);
    printf("Informe o segundo lado do triangulo: ");
    scanf("%f", &l2);
    printf("Informe o terceiro lado do triangulo: ");
    scanf("%f", &l3);

    verificartriangulo(l1, l2, l3);

    return 0;
}


#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite três valores: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Os valores podem ser os lados de um triângulo.\n");
    else
        printf("Os valores não podem ser os lados de um triângulo.\n");

    return 0;
}

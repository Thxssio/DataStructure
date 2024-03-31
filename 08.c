#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, root1, root2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        root1 = -b / (2 * a);
        printf("A equação possui uma raiz real: %.2f\n", root1);
    } else {
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: %.2f e %.2f\n", root1, root2);
    }

    return 0;
}

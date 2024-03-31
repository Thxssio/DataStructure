#include <stdio.h>

int main() {
    float A, B, C;

    printf("Insira os três lados do triângulo:\n");
    scanf("%f %f %f", &A, &B, &C);

    if (A + B > C && B + C > A && C + A > B) {
        if (A == B && B == C)
            printf("O triângulo é equilátero.\n");
        else if (A == B || B == C || C == A)
            printf("O triângulo é isósceles.\n");
        else
            printf("O triângulo é escaleno.\n");
    } else {
        printf("Os valores inseridos não formam um triângulo.\n");
    }

    return 0;
}

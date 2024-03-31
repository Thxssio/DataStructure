#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &A, &B, &C);
    
    printf("A + B + C = %d\n", A + B + C);
    
    if (A * B > C) {
        printf("A * B é maior que C.\n");
    } else {
        printf("A * B não é maior que C.\n");
    }
    
    if (C != 0 && ((float)A / C) < B) {
        printf("A / C é menor que B.\n");
    } else {
        printf("A / C não é menor que B.\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &A, &B, &C);
    
    if (A > 0) {
        printf("A é positivo.\n");
    } else {
        printf("A não é positivo.\n");
    }
    
    if (B > 0) {
        printf("B é positivo.\n");
    } else {
        printf("B não é positivo.\n");
    }
    
    if (C > 0) {
        printf("C é positivo.\n");
    } else {
        printf("C não é positivo.\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int A, B, C, maior;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &A, &B, &C);
    
    maior = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
    
    printf("O maior número é: %d\n", maior);
    
    return 0;
}

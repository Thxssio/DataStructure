#include <stdio.h>

int main() {
    int A, B, C, menor;
    
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &A, &B, &C);
    
    menor = (A < B) ? ((A < C) ? A : C) : ((B < C) ? B : C);
    
    printf("O menor número é: %d\n", menor);
    
    return 0;
}

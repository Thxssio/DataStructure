#include <stdio.h>

int main() {
    int A, B;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    if (B != 0) {
        if (A % B == 0) {
            printf("A é divisível por B.\n");
        } else {
            printf("A não é divisível por B.\n");
        }
    } else {
        printf("Erro: B não pode ser zero.\n");
    }
    
    return 0;
}

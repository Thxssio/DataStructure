#include <stdio.h>

int main() {
    int vetor[20];
    
    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < 20; i++) {
        if (vetor[i] < 0 || vetor[i] > 100) {
            printf("O número %d não pertence ao intervalo [0,100].\n", vetor[i]);
            return 0;
        }
    }
    
    printf("Todos os números pertencem ao intervalo [0,100].\n");
    
    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Não existe dia da semana com esse número.\n");
    }

    return 0;
}

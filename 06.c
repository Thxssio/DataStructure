#include <stdio.h>


int diasNoMes(int mes, int ano) {
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;
    else if (mes == 2) {
        if (ano % 400 == 0 || (ano % 100 != 0 && ano % 4 == 0))
            return 29;
        else
            return 28;
    } else
        return 31;
}

int diferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    int cont = 0;

    while (dia1 != dia2 || mes1 != mes2 || ano1 != ano2) {
        dia1++;
        cont++;

        if (dia1 > diasNoMes(mes1, ano1)) {
            dia1 = 1;
            mes1++;
        }

        // Se o mês ultrapassar 12
        if (mes1 > 12) {
            mes1 = 1;
            ano1++;
        }
    }

    return cont;
}

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Insira a primeira data (dd mm aaaa): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Insira a segunda data (dd mm aaaa): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    printf("A diferença entre as datas é de %d dias.\n", diferencaDias(dia1, mes1, ano1, dia2, mes2, ano2));

    return 0;
}

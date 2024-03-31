#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 20)
        printf("Você está abaixo do peso.\n");
    else if (imc < 25)
        printf("Você está com peso normal.\n");
    else if (imc < 30)
        printf("Você está com sobrepeso.\n");
    else if (imc < 40)
        printf("Você está obeso.\n");
    else
        printf("Você está com obesidade mórbida.\n");

    return 0;
}

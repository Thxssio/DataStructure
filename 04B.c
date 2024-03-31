#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x - x*x + 2;
}

void bisection(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Você não assumiu os valores corretos de a e b.\n");
        return;
    }

    double c = a;

    while ((b-a) >= 0.01) {

        c = (a+b)/2;
        if (f(c) == 0.0)
            break;
        else if (f(c)*f(a) < 0)
            b = c;
        else
            a = c;
    }
    printf("A raiz da função é: %.2lf\n",c);
}

int main() {
    // Valores iniciais assumidos
    double a =-200, b = 300;
    bisection(a, b);
    return 0;
}

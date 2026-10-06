#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c;
    double p;
    double area;

    printf("Digite o lado A do triangulo: ");
    scanf("%lf", &a);

    printf("Digite o lado B do triangulo: ");
    scanf("%lf", &b);

    printf("Digite o lado C do triangulo: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nArea do triangulo = %.3f\n", area);

    system("PAUSE");
    return 0;
}

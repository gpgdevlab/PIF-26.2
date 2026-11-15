#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "areas.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double raio, base, altura;

    printf("Digite o raio do círculo: ");
    if (scanf("%lf", &raio) != 1 || raio < 0) {
        printf("Raio inválido!\n");
        system("PAUSE");
        return 1;
    }

    printf("Digite a base e a altura do retângulo: ");
    if (scanf("%lf %lf", &base, &altura) != 2 || base < 0 || altura < 0) {
        printf("Medidas inválidas!\n");
        system("PAUSE");
        return 1;
    }

    printf("Área do círculo: %.2f\n", A_CIRC(raio));
    printf("Área do retângulo: %.2f\n", A_RET(base, altura));
    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));

    system("PAUSE");
    return 0;
}

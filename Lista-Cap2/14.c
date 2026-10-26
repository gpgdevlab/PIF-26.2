#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c;
    printf("Digite os três lados do triângulo (separados por espaço): ");
   

    if (scanf("%f %f %f", &a, &b, &c) == 3) { 
        if (a + b > c && a + c > b && b + c > a) {
            double p = (a + b + c) / 2.0;
            double area = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("Área do triângulo: %.2f\n", area);
        } else {
            printf("Os lados informados não formam um triângulo válido.\n");
        }
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}
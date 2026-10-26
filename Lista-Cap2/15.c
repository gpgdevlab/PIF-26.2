#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c, d;
    printf("Digite as notas (separados por espaço): ");
   

    if (scanf("%f %f %f %f", &a, &b, &c, &d) == 4) { 
        float aritmetica = (a + b + c + d) / 4;
        float ponderada = (a * 1 + b * 1 + c * 2 + d * 2) / 6;
        printf("a) Media aritmetica simples: %.2f\n", aritmetica);
        printf("b) Media ponderada: %.2f\n", ponderada);
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}
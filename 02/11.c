#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const float PI = 3.141593f;
    float graus;

    printf("Digite o valor de um ângulo: ");

    if (scanf("%f", &graus) == 1) {
        float radianos = graus * (PI / 180.0f);
        printf("%.2f° em radianos é igual a %.2f\n", graus, radianos);
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}
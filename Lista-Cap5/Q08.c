#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsius(float fahr);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float fahr;

    printf("Digite a temperatura em Fahrenheit: ");
    if (scanf("%f", &fahr) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    printf("Temperatura em Celsius: %.2f\n", celsius(fahr));
    system("PAUSE");
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}

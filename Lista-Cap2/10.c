#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");

    if (scanf("%f", &celsius) == 1) {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        kelvin = celsius + 273.15;

        printf("Fahrenheit: %.2f °F\n", fahrenheit);
        printf("Kelvin: %.2f K\n", kelvin);
    } else {
        printf("Entrada inválida! Digite um número válido.\n");
    }
    system("PAUSE");
    return 0;
}
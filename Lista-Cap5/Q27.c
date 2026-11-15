#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int opcao;
    float temperatura, resultado;

    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    printf("Digite a temperatura: ");
    if (scanf("%f", &temperatura) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    switch (opcao) {
        case 1: resultado = celsiusParaFahrenheit(temperatura); break;
        case 2: resultado = celsiusParaKelvin(temperatura); break;
        case 3: resultado = fahrenheitParaCelsius(temperatura); break;
        case 4: resultado = kelvinParaCelsius(temperatura); break;
        default:
            printf("Opção inválida.\n");
            system("PAUSE");
            return 1;
    }

    printf("Temperatura convertida: %.2f\n", resultado);
    system("PAUSE");
    return 0;
}

float celsiusParaFahrenheit(float c) { return c * 9.0f / 5.0f + 32.0f; }
float celsiusParaKelvin(float c) { return c + 273.15f; }
float fahrenheitParaCelsius(float f) { return (f - 32.0f) * 5.0f / 9.0f; }
float kelvinParaCelsius(float k) { return k - 273.15f; }

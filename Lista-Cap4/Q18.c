#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int opcao;
    float entrada, resultado;

    printf("===== CONVERSOR DE TEMPERATURA =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Erro: opção inválida!\n");
    } else {
        printf("Digite a temperatura: ");
        scanf("%f", &entrada);

        switch (opcao) {
            case 1:
                resultado = entrada * 1.8 + 32;
                printf("%.2f °C = %.2f °F\n", entrada, resultado);
                break;
            case 2:
                resultado = entrada + 273.15;
                printf("%.2f °C = %.2f K\n", entrada, resultado);
                break;
            case 3:
                resultado = (entrada - 32) / 1.8;
                printf("%.2f °F = %.2f °C\n", entrada, resultado);
                break;
            case 4:
                resultado = entrada - 273.15;
                printf("%.2f K = %.2f °C\n", entrada, resultado);
                break;
        }
    }

    system("PAUSE");
    return 0;
}

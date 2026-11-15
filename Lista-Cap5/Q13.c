#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int opcao;
    float a, b, resultado;

    printf("===== CALCULADORA =====\n");
    printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
    printf("Escolha: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    printf("Digite dois valores: ");
    if (scanf("%f %f", &a, &b) != 2) {
        printf("Entrada inválida!\n");
        system("PAUSE");
        return 1;
    }

    switch (opcao) {
        case 1: resultado = soma(a, b); break;
        case 2: resultado = subtrai(a, b); break;
        case 3: resultado = multiplica(a, b); break;
        case 4:
            if (b == 0.0f) {
                printf("Não é possível dividir por zero.\n");
                system("PAUSE");
                return 1;
            }
            resultado = divide(a, b);
            break;
        default:
            printf("Opção inválida.\n");
            system("PAUSE");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    system("PAUSE");
    return 0;
}

float soma(float a, float b) { return a + b; }
float subtrai(float a, float b) { return a - b; }
float multiplica(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

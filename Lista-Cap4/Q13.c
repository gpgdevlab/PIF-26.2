#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char op;
    double a, b, resultado;

    printf("===== CALCULADORA =====\n");
    printf("+ : Soma\n");
    printf("- : Subtração\n");
    printf("* : Multiplicação\n");
    printf("/ : Divisão\n");
    printf("^ : Potenciação\n");
    printf("Escolha a operação: ");
    scanf(" %c", &op);

    printf("Digite o primeiro operando: ");
    scanf("%lf", &a);
    printf("Digite o segundo operando: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            resultado = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, resultado);
            break;
        case '-':
            resultado = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, resultado);
            break;
        case '*':
            resultado = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, resultado);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisão por zero não é permitida!\n");
            } else {
                resultado = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, resultado);
            }
            break;
        case '^':
            resultado = pow(a, b);
            printf("%.2lf ^ %.2lf = %.2lf\n", a, b, resultado);
            break;
        default:
            printf("Erro: operação inválida!\n");
    }

    system("PAUSE");
    return 0;
}

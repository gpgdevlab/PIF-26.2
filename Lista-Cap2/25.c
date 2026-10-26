#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario_base;

    printf("Digite o salário-base do funcionário: R$ ");
    if (scanf("%f", &salario_base) == 1) {
        float gratificacao = salario_base * 0.05f;
        float imposto = salario_base * 0.07f;
        float salario_liquido = salario_base + gratificacao - imposto;

        printf("\nGratificação (5%%): R$ %.2f\n", gratificacao);
        printf("Imposto retido (7%%): R$ %.2f\n", imposto);
        printf("Salário líquido a receber: R$ %.2f\n", salario_liquido);
    }

    system("PAUSE");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dias;
    double salarioBruto;
    double gratificacao;
    double imposto;
    double salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 45.00;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\nHOLERITE\n");
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    system("PAUSE");
    return 0;
}

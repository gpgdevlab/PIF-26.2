#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float horas_normais, horas_extras;

    printf("Digite o total de horas normais no ano: ");
    scanf("%f", &horas_normais);
    printf("Digite o total de horas extras no ano: ");
    scanf("%f", &horas_extras);

    float salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);

    // Operador ternário calcula o imposto de 10% apenas sobre a quantia que excede R$ 12.000,00
    float excedente = salario_bruto - 12000.0f;
    float imposto = (excedente > 0.0f) ? (excedente * 0.10f) : 0.0f;

    printf("\nSalário anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto de renda a pagar: R$ %.2f\n", imposto);

    system("PAUSE");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float dias_trabalhados;
    const float taxa = 30.00;
    printf("digite a quantidade de dias efetivamente trabalhados: ");
   

    if (scanf("%f", &dias_trabalhados) == 1) { 
        float valor_bruto = dias_trabalhados * taxa;
        float valor_liquido = valor_bruto - valor_bruto * 0.08;
        printf("a) Valor bruto: R$%.2f\n", valor_bruto);
        printf("b) Valor liquido: R$%.2f\n", valor_liquido);
    } else {
        printf("Entrada inválida! Por favor, digite um número.\n");
    }

    system("PAUSE");
    return 0;
}